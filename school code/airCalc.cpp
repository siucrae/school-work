#include <iostream>
#include <fstream>
#include <string>
#include <climits>
using namespace std;

int main() {
    // Declare variables
    int maxAltitude = 0, timestamps = 0, temp;
    double average = 0.0, sum = 0.0;
    string fileName;

    // Request file name
    cout << "Enter filename: ";
    cin >> fileName;

    // Set up the opening of the file
    ifstream inputStream;

    // Open the inputted file
    inputStream.open(fileName);

    // Check if the file opened successfully
    if (inputStream.fail()) {
        cout << "Error: Unable to open " << fileName << endl;
        return -1;
    }

    // Read values from the file and process them
    while (inputStream >> temp) {
        timestamps++;
        sum += temp;

        // Update maxAltitude
        if (temp > maxAltitude) {
            maxAltitude = temp;
        }
    }

    // Close the file
    inputStream.close();

    // Calculate the average
    if (timestamps > 0) {
        average = sum / timestamps;
    }

    // Output the maximum and average of the data
    cout << "Maximum Altitude: " << maxAltitude << " meters" << endl;
    cout << "Average Altitude: " << average << " meters" << endl;

    return 0;
}
