#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

int main() {
    // Part 1: Using rand() with time(0) for seeding
    std::cout << "Random numbers with rand() and time(0):" << std::endl;
    srand(static_cast<unsigned int>(time(0))); // Seed with current time

    for (int i = 0; i < 5; ++i) {
        int randomNumber = rand();
        std::cout << "Random number " << i + 1 << ": " << randomNumber << std::endl;
    }

    // Part 2: Using rand() with a specific time for seeding
    std::cout << "\nRandom number with rand() and a specific time:" << std::endl;
    time_t specificTime = 1635729915; // Replace this with your specific time in seconds
    srand(static_cast<unsigned int>(specificTime)); // Seed with specific time

    int specificRandomNumber = rand(); // Generate a random number
    std::cout << "Random number based on specific time: " << specificRandomNumber << std::endl;

    // Part 3: Using <random> for better randomness
    std::cout << "\nRandom numbers with <random> library:" << std::endl;
    std::random_device rd;
    std::mt19937 gen(rd()); // Mersenne Twister engine
    std::uniform_int_distribution<> distrib(1, 100); // Random numbers between 1 and 100

    for (int i = 0; i < 5; ++i) {
        int randomNumber = distrib(gen);
        std::cout << "Random number " << i + 1 << ": " << randomNumber << std::endl;
    }

    return 0;
}
