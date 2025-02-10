#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

// Declares functions
void func1(int, string);
void func2(double&, double&, double&);
void func3(int, double[], double[], int[]);

int main() {
    // Declares variables
    int N, arraySize;
    string fileName;

    // Requests input for func1
    cout << "Input the name of the file: ";
    cin >> fileName;
    cout << "Enter max temperature: ";
    cin >> N;

    // Requests input for func2
    double x, y, z;
    cout << "Please input values for x, y, z: ";
    cin >> x >> y >> z;

    // Requests input for func3
    cout << "Enter the number of cylinders: ";
    cin >> arraySize;

    // Initializes arrays after getting arraySize
    double radius[arraySize];
    double height[arraySize];
    int volume[arraySize];

    // Runs the functions
    func1(N, fileName);
    func2(x, y, z);
    func3(arraySize, radius, height, volume);

    // Outputs func2
    cout << x << " " << y << " " << z << endl;

    // Outputs func3 (volumes)
    for (int i = 0; i < arraySize; i++) {
        cout << volume[i] << endl;
    }

    return 0;
}

void func1(int N, string fileName) {
    float kelvin;
    // Opens the export file
    ofstream outputStream;
    outputStream.open(fileName);
    // Inputs values into the export file
    for (int i = 0; i <= N; i += 20) {
        kelvin = i + 273.15;
        outputStream << i << ", " << kelvin << endl;
    }
}

void func2(double& x, double& y, double& z) {
    if (x < y) swap(x, y);
    if (x < z) swap(x, z);
    if (y < z) swap(y, z);
    y = x / z;
    x = x * y * z;
    z = sqrt(x * y * z);
}

void func3(int arraySize, double radius[], double height[], int volume[]) {
    for (int i = 0; i < arraySize; i++) {
        volume[i] = M_PI * pow(radius[i], 2) * height[i];
    }
}
