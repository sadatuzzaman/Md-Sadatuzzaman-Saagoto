syms x 
f = @(x)log(1-x^2);
df = diff(f,x);
fprintf('The root is: %s',df);
