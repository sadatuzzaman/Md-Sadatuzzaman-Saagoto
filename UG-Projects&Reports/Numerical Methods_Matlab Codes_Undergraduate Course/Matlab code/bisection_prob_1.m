syms x
f=@(x)sqrt((9.81*95)/x)*tanh((sqrt(9.81*x)/95)*9)-46;
xl=0.2; %lower limit
xu=0.5; %upper limit
error_limit=5; %max error in 
max_iteration=2500; %maximum iteration we want
iter = 0; xb = xl; 
while (1)
iter=iter+1;
xb_old = xb;
xb = (xl + xu)/2;
error = abs((xb - xb_old)/xb) * 100;
test = f(xl)*f(xb);
if test < 0
xu = xb; 
elseif test > 0
xl = xb;
else
error = 0;
end
if error <= error_limit || iter >= max_iteration,break,end
end
fprintf('The root is %f',xb)