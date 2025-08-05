h=0.25; %step size
xfinal=4; %solve from x=[0,xfinal]
x(1)=0;y(1)=1; %initial condition 
f=@(x,y)y*x^2-1.1*y; %given function
for i=1:ceil(xfinal/h)
    x(i+1)=x(i)+h;
    y(i+1)=y(i)+f(x(i),y(i))*h;
end
plot(x,y,'r')%red color
hold on

