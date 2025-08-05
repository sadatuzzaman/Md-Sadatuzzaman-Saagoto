function [theta, J_history] = gradientDescent(X, y, theta, alpha, num_iters)
%GRADIENTDESCENT Performs gradient descent to learn theta
%   theta = GRADIENTDESCENT(X, y, theta, alpha, num_iters) updates theta by 
%   taking num_iters gradient steps with learning rate alpha

% Initialize some useful values


m = length(y); % number of training examples


J_history = zeros(50, 1); %creates a 1500*1 vector and each component is 0


for iter = 1:50

    % ====================== YOUR CODE HERE ======================
    % Instructions: Perform a single gradient step on the parameter vector
    %               theta. 
    %
    % Hint: While debugging, it can be useful to print out the values
    %       of the cost function (computeCost) and gradient here.
    %
    %
h = X * theta          %theta is a 2*1 vector
t1 = theta(1) - alpha * (1/m) * sum(h-y)
t2 = theta(2) - alpha * (1/m) * sum((h-y) .*X(:, 2)) %(h-y) is a matrix and we do a componentwise multiplication of (h-y) and X
theta(1) = t1
theta(2) = t2
%this is simultaneous update algorithm





    % ============================================================

    % Save the cost J in every iteration    
    J_history(iter) = computeCost(X, y, theta);
    end
plot(0:49, J_history(1:50), '-')
end
