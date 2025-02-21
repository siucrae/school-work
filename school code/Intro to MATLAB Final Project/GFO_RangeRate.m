function Rho_dot = GFO_RangeRate(r1, r2, v1, v2)
    % r1: Position of satellite 1
    % r2: Position of satellite 2
    % v1: Velocity of satellite 1
    % v2: Velocity of satellite 2

    % compute the relative velocity (delta v)
    delta_v = v2 - v1;

    % compute the range vector (delta r)
    delta_r = r2 - r1;

    % unit vector for range
    e_L = delta_r ./ vecnorm(delta_r, 2, 2);

    % calculate the range-rate using the dot product
    Rho_dot = dot(delta_v, e_L, 2);
end
