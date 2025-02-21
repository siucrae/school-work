function Rho = GFO_Range(r1, r2)
    % r1: Position of satellite 1 [x1, y1, z1]
    % r2: Position of satellite 2 [x2, y2, z2]

    % calculate the distance using the Euclidean formula
    Rho = sqrt((r2(:,1) - r1(:,1)).^2 + (r2(:,2) - r1(:,2)).^2 + (r2(:,3) - r1(:,3)).^2);
end
