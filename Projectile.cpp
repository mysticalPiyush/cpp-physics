// Basics of projectile motion

#include <iostream>
#include <cmath>

const double GRAVITY = 9.8; 

void calculateProjectileMotion(double velocity, double angle) {

    double angleRadians = angle * M_PI / 180.0;

    double timeOfFlight = (2 * velocity * sin(angleRadians)) / GRAVITY;
    double maxHeight = (velocity * velocity * sin(angleRadians) * sin(angleRadians)) / (2 * GRAVITY);
    double horizontalRange = (velocity * velocity * sin(2 * angleRadians)) / GRAVITY;

    std::cout << "Time of Flight: " << timeOfFlight << " seconds\n";
    std::cout << "Maximum Height: " << maxHeight << " meters\n";
    std::cout << "Horizontal Range: " << horizontalRange << " meters\n";
}

int main() {
    double velocity, angle;

    std::cout << "Enter the initial velocity (m/s): ";
    std::cin >> velocity;
    std::cout << "Enter the angle of projection (degrees): ";
    std::cin >> angle;

    calculateProjectileMotion(velocity, angle);
}
