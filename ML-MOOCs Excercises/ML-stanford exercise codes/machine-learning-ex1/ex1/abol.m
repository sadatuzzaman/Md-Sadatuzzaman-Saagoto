data = load('ex1data1.txt')
y = data(:,2)
disp(y)
m = length(y)
disp(m)
X = [ones(m,1), data(:,1)]
theta = zeros(2,1)
disp(theta)