% MATLAB Equivalent Code
% Variable declaration and initialization
myArray = [3, 7, 12, 8, 2];
my2dArray = [[4, 2]; [6, 12]; [18, 3]];

% Output message 1
disp('Original Array');
disp(myArray);
disp('Original Matrix');
disp(my2dArray);

% Changing numbers from myArray
myArray(2:4) = 4;

% Changing numbers from my2dArray
my2dArray(2, 1:2) = 7;

% Output message 2
disp('Modified Array');
disp(myArray);
disp('Modified Matrix');
disp(my2dArray);
