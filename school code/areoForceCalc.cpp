#include <iostream>

// Structure for aerodynamics properties
struct Aerodynamics {
    double liftCoefficient;
    double dragCoefficient;
};

// Class for Aircraft
class Aircraft {
public:
    double wingArea;
    double airspeed;
    Aerodynamics aerodynamics;

    // Constructor
    Aircraft(double wingArea, double airspeed, double liftCoefficient, double dragCoefficient) :
        wingArea(wingArea),
        airspeed(airspeed),
        aerodynamics({ liftCoefficient, dragCoefficient }) {}

    // Function to calculate lift force
    double calculateLiftForce() const {
        return 0.5 * aerodynamics.liftCoefficient * wingArea * airspeed * airspeed;
    }

    // Function to calculate drag force
    double calculateDragForce() const {
        return 0.5 * aerodynamics.dragCoefficient * wingArea * airspeed * airspeed;
    }
};

int main() {
    // Example usage
    Aircraft myAircraft(100.0, 200.0, 0.7, 0.3);

    // Calculate and display lift force and drag force
    std::cout << "Lift Force: " << myAircraft.calculateLiftForce() << std::endl;
    std::cout << "Drag Force: " << myAircraft.calculateDragForce() << std::endl;

    return 0;
}
