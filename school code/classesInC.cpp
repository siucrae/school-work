#include <iostream>
#include <string>

class Dog {
private:
    std::string name;
    int age; // Dog's age (in years)
    std::string breed;
    std::string color;
    float weight; // Dog's weight (in pounds)

public:
    // Constructor
    Dog(const std::string dogName, int dogAge, const std::string dogBreed, const std::string furColor)
        : name(dogName), age(dogAge), breed(dogBreed), color(furColor), weight(0.0) {}

    // Public Accessor Methods
    std::string getName() const { return name; }
    std::string getBreed() const { return breed; }
    std::string getColor() const { return color; }
    float getWeight() const { return weight; }
    int getAge() const { return age; }

    // Public Mutator Methods
    void setName(const std::string newName) { name = newName; }
    void setBreed(const std::string newBreed) { breed = newBreed; }
    void setColor(const std::string newColor) { color = newColor; }
    void setWeight(const float newWeight) { weight = newWeight; }
    void setAge(const int newAge) { age = newAge; }

    // Private Behavior Methods
    void Bark() const { std::cout << name << " is barking!" << std::endl; }
    void Fetch() const { std::cout << name << " is fetching a ball." << std::endl; }
    void Sit() const { std::cout << name << " is sitting." << std::endl; }
    void Eat(double foodAmount) {
        if (foodAmount > 0) {
            weight += static_cast<float>(foodAmount) * 0.05; // Adjust weight based on a simple formula
            std::cout << name << " has eaten " << foodAmount << " pounds of food and now weighs " << weight << " lbs." << std::endl;
        }
    }
};

int main() {
    // Example usage of the Dog class
    Dog myDog("Buddy", 3, "Golden Retriever", "Golden");

    myDog.Bark();
    myDog.Fetch();
    myDog.Sit();
    myDog.Eat(2.5);

    std::cout << "Dog's Name: " << myDog.getName() << std::endl;
    std::cout << "Dog's Age: " << myDog.getAge() << " years" << std::endl;
    std::cout << "Dog's Breed: " << myDog.getBreed() << std::endl;
    std::cout << "Dog's Color: " << myDog.getColor() << std::endl;
    std::cout << "Dog's Weight: " << myDog.getWeight() << " lbs" << std::endl;

    return 0;
}
