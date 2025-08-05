%f=input('insert the function for which you want to know the root:');
f= @(x) ;
xl= ;%input('give lower limit xl:');
xu= ;%input('give upper limit xu:');
error_lim= ;%input('give your error limit value in %:');
max_iter= ;%input('give the maximum iteration value:');
iter = 0; xr = xl;
while (1)
iter=iter+1;
xr_old = xr;
xr = xu-(f(xu)*(xl-xu))/(f(xl)-f(xu));
error = abs((xr - xr_old)/xr) * 100;
test = f(xl)*f(xr);
if test < 0
xu = xr;
elseif test > 0
xl = xr;
else
error = 0;
end
if error <= error_lim || iter >= max_iter,break,end
end
fprintf('The root is %f',xr)
