function visibility = SatVisibility(rG, rSat)
    % rG: Position of the Satellite Laser Ranging station [xG, yG, zG]
    % rSat: Position of the satellite [xSat, ySat, zSat]

    % calculate the line-of-sight vector
    line_of_sight = rSat - rG;

    % compute the distance between the station and satellite
    distance = norm(line_of_sight);

    % check visibility criteria (e.g., angle of elevation)
    % placeholder: assuming always visible if within a threshold distance
    if distance < 1000000  % 1000 km threshold
        visibility = true;
    else
        visibility = false;
    end
end
