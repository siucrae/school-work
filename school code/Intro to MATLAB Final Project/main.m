% main Program (main.m)

% load GRACE-FO data for two satellites (one is missing from whenever the assignment was done)
[t1, r1, v1] = ReadGFO_Orbit('GNV1B_2024-02-22_C_04.txt');
[t2, r2, v2] = ReadGFO_Orbit('GNV1B_2024-02-22_D_04.txt');

% calculate the inter-satellite range
Rho = GFO_Range(r1, r2);

% calculate the inter-satellite range-rate
Rho_dot = GFO_RangeRate(r1, r2, v1, v2);

% compute numerical differentiation for range-rate
dt = 1;  % 1 second sampling rate
Rho_dot_ND = GFO_NUmDiff(dt, Rho, Rho_dot);

% satellite visibility (example for a specific station)
rG = [1130714.219, -4831369.903, 3994085.962];  % SLR station position
visibility = SatVisibility(rG, r1);

% output results or save them for further analysis
fprintf('Inter-satellite Range: %f\n', Rho(end));
fprintf('Inter-satellite Range Rate: %f\n', Rho_dot(end));
fprintf('Visibility from Station: %d\n', visibility);
