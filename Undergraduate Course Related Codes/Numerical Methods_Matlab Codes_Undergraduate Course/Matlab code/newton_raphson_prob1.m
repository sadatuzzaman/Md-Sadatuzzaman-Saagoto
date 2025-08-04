syms x 
f =@(x) ;
df= @(x) ;
xr=; %first assumption of root
error_lim= ;
max_iter= ;
iter = 0;
while(1)
    iter=iter+1;
    xr_old = xr;
    xr= xr_old - f(xr_old)/df(xr_old);
    error = abs((xr - xr_old)/xr) * 100;
if error <= error_lim || iter >= max_iter,break,end
end
fprintf('The root is: %f',xr)