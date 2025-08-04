f=input('insert the function for which you want to know the root:');
xl=input('give lower limit xl:');
xu=input('give upper limit xu:');
error_lim=input('give your error limit value in %:');
max_iter=input('give the maximum iteration value:');
iter = 0; saagoto = xl;
while (1)
iter=iter+1;
saagoto_old = saagoto;
saagoto = (xl + xu)/2;
error = abs((saagoto - saagoto_old)/saagoto) * 100;
test = f(xl)*f(saagoto);
if test < 0
xu = saagoto; 
elseif test > 0
xl = saagoto;
else
error = 0;
end
if error <= error_lim || iter >= max_iter,break,end
end
fprintf('The root is %f',saagoto)