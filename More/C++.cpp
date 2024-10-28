#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number % 2  == 0){ std::cout << "Число "<< number << " чётное";}
    else{ std::cout << "Число "<< number << " нечётное";}
}