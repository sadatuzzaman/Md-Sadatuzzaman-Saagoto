#include <Servo.h>

Servo servoThumb;
Servo servoIndex;
Servo servoMiddle;
Servo servoRing;
Servo servoPinky;

void setup() {
  // Initialize servos
  servoThumb.attach(2);    // Attach the servo for the thumb to pin 2
  servoIndex.attach(3);   
  servoMiddle.attach(4);  
  servoRing.attach(5);    
  servoPinky.attach(6);   

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read serial data
  if (Serial.available() > 0) {
    char fingerStatus[5];
    Serial.readBytesUntil('\n', fingerStatus, sizeof(fingerStatus));
    
    // Print received data for debugging
    Serial.print("Received Data: ");
    Serial.println(fingerStatus);

    // Convert the received data to integer values (0 or 1)
    int thumb = fingerStatus[0] - '0';
    int index = fingerStatus[1] - '0';
    int middle = fingerStatus[2] - '0';
    int ring = fingerStatus[3] - '0';
    int pinky = fingerStatus[4] - '0';

    // Control servos based on finger status


    if (thumb == 1) {
      servoThumb.write(120);  // Move the servo for the thumb to 120 degrees
    } else {
      servoThumb.write(0);   // Move the servo for the thumb to 0 degrees
    } // This logic will be repeated for all five fingers

    if (index == 1) {
      servoIndex.write(120);  
    } else {
      servoIndex.write(0);   
    }

    if (middle == 1) {
      servoMiddle.write(120);  
    } else {
      servoMiddle.write(0);   
    }

    if (ring == 1) {
      servoRing.write(120);  
    } else {
      servoRing.write(0);   
    }

    if (pinky == 1) {
      servoPinky.write(120);  
    } else {
      servoPinky.write(0);   
    }

    delay(100);  // Delay to avoid rapid servo movements
  }
}
