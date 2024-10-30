#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    if (std::cin.fail()) {
        std::cerr << "Введено неожиданное число" << std::endl;
        return 1;
    }

    if (N >= 1 && N <= 10) {
        const std::string romanNumerals[] = {"", "I", "II", "III", "IV", "V",
                                             "VI", "VII", "VIII", "IX", "X"};
        std::cout << romanNumerals[N] << std::endl;
    } else {
        std::cerr << "Введено неожиданное число" << std::endl;
    }
//переделать нахуй
    return 0;
}
