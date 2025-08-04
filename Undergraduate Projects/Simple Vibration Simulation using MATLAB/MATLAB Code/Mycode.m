format long;
% parameter SI unit
m=5.7;%kg
k=1140;%N/m
c=20.7;% N-s/m
f=500; % N
w=0;
n=1;
for w=0.1:1:100
tt=0.01;
t=150;
sim1=sim('vib_sim1');
x=simout1;
y=simout2;
yy(n,1)=w;
yy(n,2)=max(abs(y));

n=n+1;
end
plot(yy(:,1),yy(:,2),'o')


