#include <string>
#include <iostream>

int main() {
    // Ввод строки
    std::string line;
    std::getline(std::cin, line);

    // Ввод числа и символа
    int number;
    char symbol;
    std::cin >> number >> symbol;
    line[number] = symbol;


    // Вывод полученной строки
    std::cout << line << std::endl;

    return 0;
}