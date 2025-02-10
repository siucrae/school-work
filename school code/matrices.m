% MATLAB Code for Matrix Operations

% Define Matrices A, B, C
A = [4 6; 2 5];
B = [2 0; 2 0];
C = [1 3; 4 1];

% Perform Element-wise multiplication and addition
D = A .* B + C;

% Display the result
disp('Resulting Matrix D:');
disp(D);

% Resulting Matrix D will be:
%    9   18
%    9    6
