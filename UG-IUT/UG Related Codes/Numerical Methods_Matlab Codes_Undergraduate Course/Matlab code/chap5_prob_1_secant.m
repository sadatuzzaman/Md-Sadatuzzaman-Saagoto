syms x
f=@(x)sqrt((9.81*95)/x)*tanh((sqrt(9.81*x)/95)*9)-46;
xl=0.2 ;%lower value
xu=0.5 ;%upper value
error_lim= 5;%max allowable error in percentage
max_iter= 10000;%maximum iteration value we want
iter= 0; xr = xu;
while(1)
    iter = iter+1;
    xr_old = xr;
    xr = xu - ((f(xu)*(xu-xl))/(f(xu)-f(xl)));
    error = abs((xr- xr_old)/xr)*100;
    if error<= error_lim || iter>=max_iter, break, end
    xl=xu; xu=xr;
end
fprintf('The root is %f',xr)

        