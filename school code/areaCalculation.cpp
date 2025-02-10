#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;

void func1(int, string);
void func2(double&, double&);
void func3(int, double[], double[], int[]);

int main(){

    int N = 25;
    string filename = "prob2.csv";

    double x = 0.5;
    double y = 3.0;

    int N2 = 3;
    double radius[N2] = {2.5, 5.0, 4.0};
    double height[N2] = {6.7, 2.5, 2.0};
    int area[N2];

    func1(N, filename);

    func2(x, y);
    cout<<x<<", "<<y<<endl;

    func3(N2, radius, height, area);
    cout<<area[0]<<", "<<area[1]<<", "<<area[2]<<endl;

    return 0;
}

void func1(int N, string filename){
    ifstream inputStream;
    inputStream.open(filename);

    int i;
    double temp;
    while(inputStream >> i >> temp){
        cout << i << ", " << temp + 273.15 << endl;
    }

    inputStream.close();
}

void func2(double& x, double& y){
    x = pow(x,2);
    y = pow(y,2);
    double temp = x;
    x = y;
    y = temp;
}

void func3(int N2, double radius[], double height[], int area[]){
    const float pi = 3.14159;

    for(int i = 0; i < N2; i++){
        area[i] = 2*pi* radius[i] * height[i] + 2 * pi * (pow(radius[i],2));
    }
}
