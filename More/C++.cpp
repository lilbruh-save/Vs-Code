#include <iostream>

struct Robot {
    double energy;
    double speed;
};

// Представьте, что main находится далеко от описания структуры Robot.
int main() {
    using namespace std::literals;
    
    // В этом месте трудно понять, какое из чисел 30.0 и 25.7 задаёт 
    // энергию, а какое — скорость.
    Robot robot = { .energy = 30.0, 25.7 };
    std::cout << "Energy: "s << robot.energy << ", Speed: "s 
              << robot.speed << std::endl;
}