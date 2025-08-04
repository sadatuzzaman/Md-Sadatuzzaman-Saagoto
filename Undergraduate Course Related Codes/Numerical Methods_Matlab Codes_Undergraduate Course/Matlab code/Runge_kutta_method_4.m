h=.1; 
saagoto=4; 
x(1)=0;y(1)=2;
f=@(x,y)4*(exp(0.8*x))-0.5*y;
for i=1:ceil(saagoto/h) 
    x(i+1)=x(i)+h;
    k1=f(x(i),      y(i));
    k2=f(x(i)+0.5*h,y(i)+0.5*k1*h);
    k3=f(x(i)+0.5*h,y(i)+0.5*k2*h);
    k4=f(x(i)+    h,y(i)+    k3*h);
    y(i+1)=y(i)+(h/6)*(k1+2*k2+2*k3+k4);
end
plot(x,y,'k')
hold off



    
    
    
