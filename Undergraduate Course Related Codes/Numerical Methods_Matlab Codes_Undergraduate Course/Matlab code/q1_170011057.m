f= @(h)(3-h)*h^2-3.2;
r = 1;
d = 2*r;
hl= 0;
hu= d;
error_lim= 0.1;
max_iter= 5000;
iter = 0; saagoto = hl;
while (1)
iter=iter+1;
saagoto_old = saagoto;
saagoto = (hl + hu)/2;
error = abs((saagoto - saagoto_old)/saagoto) * 100;
test = f(hl)*f(saagoto);
if test < 0
hu = saagoto; 
elseif test > 0
hl = saagoto;
else
error = 0;
end
if error <= error_lim || iter >= max_iter,break,end
end
fprintf('The root is %f',saagoto)