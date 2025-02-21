function [sat_names, sat_ids, altitudes, inclinations, periods] = GFO_Oribit(file)
    % this function reads the satellite data from the SLR.txt file and outputs:
    % sat_names - list of satellite names
    % sat_ids - list of satellite IDs
    % altitudes - list of altitudes (in km)
    % inclinations - list of inclinations (in degrees)
    % periods - list of orbital periods (in minutes)

    % open the SLR data file
    fid = fopen(file, 'r');
    if fid == -1
        error('Failed to open the file: %s', file);
    end

    % initialize output variables
    sat_names = {};
    sat_ids = [];
    altitudes = [];
    inclinations = [];
    periods = [];

    % skip the header line
    fgetl(fid);

    % loop through the file and read the data
    while ~feof(fid)
        line = fgetl(fid);

        % split the line by tab characters (assuming tab separation)
        data = strsplit(line, '\t');

        % check if the data line has the correct number of columns
        if length(data) == 5
            % extract the satellite information
            sat_names = [sat_names; data{1}];         % satellite name
            sat_ids = [sat_ids; str2double(data{2})]; % satellite ID
            altitudes = [altitudes; str2double(data{3})]; % altitude (km)
            inclinations = [inclinations; str2double(data{4})]; % inclination (degrees)
            periods = [periods; str2double(data{5})]; % orbital period (min)
        end
    end

    % close the file
    fclose(fid);
end
