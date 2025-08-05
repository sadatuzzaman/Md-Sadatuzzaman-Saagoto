import cv2
import mediapipe as mp
import serial
import time
import threading

# Initialize MediaPipe Hands
mp_hands = mp.solutions.hands
hands = mp_hands.Hands()
mp_drawing = mp.solutions.drawing_utils

# Initialize Serial Communication with Arduino
ser = serial.Serial('COM7', 9600)  # Replace 'COM3' with the correct port name


# Define a function to detect and analyze fingers
def detect_fingers(frame):
    frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    results = hands.process(frame_rgb)

    if results.multi_hand_landmarks:
        for landmarks in results.multi_hand_landmarks:
            mp_drawing.draw_landmarks(frame, landmarks, mp_hands.HAND_CONNECTIONS)
            finger_landmarks = [
                landmarks.landmark[mp_hands.HandLandmark.THUMB_TIP],
                landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP],
                landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP],
                landmarks.landmark[mp_hands.HandLandmark.RING_FINGER_TIP],
                landmarks.landmark[mp_hands.HandLandmark.PINKY_TIP],
            ]
            #print("Landmark test: ", finger_landmarks)
            finger_status = [1 if landmark.y < finger_landmarks[0].y else 0 for landmark in finger_landmarks]
            finger_status_str = ''.join(map(str, finger_status))

            # Send finger status to Arduino
            ser.write(finger_status_str.encode())

            # Print sent data for monitoring
            print(f'Sent to Arduino: {finger_status}')

            time.sleep(0.1)

            finger_names = ['Thumb', 'Index', 'Middle', 'Ring', 'Pinky']
            for i, status in enumerate(finger_status):
                cv2.putText(frame, f'{finger_names[i]}: {status}', (10, 30 + i * 30), cv2.FONT_HERSHEY_SIMPLEX, 1,
                            (0, 255, 0), 2)
    return frame


# Open the webcam
cap = cv2.VideoCapture(0)


# Define a function for reading and printing data from Arduino
def read_from_arduino():
    while True:
        data = ser.readline().decode().strip()
        if data:
            print(f'Received from Arduino: {data}')


# Create a thread for reading from Arduino
arduino_thread = threading.Thread(target=read_from_arduino)
arduino_thread.daemon = True
arduino_thread.start()

while cap.isOpened():
    ret, frame = cap.read()
    if not ret:
        break

    frame = detect_fingers(frame)

    cv2.imshow('Finger Detection', frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
hands.close()
ser.close()
