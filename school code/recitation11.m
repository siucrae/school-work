 % 2d plots
 % 3d plots

%% declare functions and data

x = -2*pi:1/3:2*pi;
y1 = sin(x);
y2 = cos(x);
y3 = tan(x);
y4 = exp(x);
y5 = x.^2;

figure
%% 2D line plot
subplot(3,2,1)
plot(x,y1,'r');
hold on;
plot(x, y2, 'b');
title('LinePlot: sin(x) and cos(x)');
xlabel('x');
legend('sin(x)','cos(x)');
grid on;

%% scatter plot
subplot(3,2,2);
scatter(x,y2);
title('Scatterplot: cos(x)');
xlabel('x');
ylabel('cos(x)');

%% stem plot
subplot(3,2,3);
stem(x,y3);
title('Stem Plot: tan(x)');
xlabel('x');
ylabel('tan(x)');

%%area plot
subplot(3,2,4);
area(x,y4);
title('Area Plot: exp(x)');
xlabel('x');
ylabel('exp(x)');

%%Bar plot
subplot(3,2,5);
bar(x,y5);
title('Bar Plot: x^2');
xlabel('x');
ylabel('x^2');

%% pie chart
subplot(3,2,6);
labels = {'A','B','C','D','E'};
size = [20,30,15,25,10];
pie(size,labels);
title('Pie Chart');


%----------------------------

figure
%%generate sample data
x = -2:0.1:2;
y = -2:0.1:2;
[x,y] = meshgrid(x,y);
z = sin(x).*cos(y);

%%plotting in 3d
subplot(2,2,1);
plot3(x,y,z,'b.');
title('3D Scatter plot');
xlabel('x');
ylabel('y');
zlabel('z');

%contour plot
subplot(2,2,2);
contour(x,y,z);
colorbar;
title('Contour PLot');
xlabel('x');
ylabel('y');

%%surface plot
subplot(2,2,3);
surf(x,y,z);
colorbar;
title('Sruface Plot');
xlabel('x');
ylabel('y');
zlabel('z');

%%scatterplot
subplot(2,2,4);
scatter(x(:),y(:),15,z(:),'filled');
colorbar;
title('Scatter Plot');
xlabel('x');
ylabel('y');
zlabel('z');

sgtitle('Sample Plot Demo for plot3, contour, surf, and scatter');