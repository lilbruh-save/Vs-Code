// В этом файле определения функций.
// За основу возьмите решение предыдущей задачи.// 
#include "calculator.h"

bool ReadNumber(Number& result) {
    std::string input;
    if (!(std::cin >> input)) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
        return false;
    }
    try {
        result = std::stod(input);
    } catch (const std::invalid_argument&) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
        return false;
    }
    return true;
}

bool RunCalculatorCycle() {
    Number memory = 0;
    bool memory_set = false;
    Number current_value;

    if (!ReadNumber(current_value)) {
        return false;
    }

    while (true) {
        std::string command;
        if (!(std::cin >> command)) {
            break; // EOF reached
        }

        if (command == "+") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value += operand;
        } else if (command == "-") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value -= operand;
        } else if (command == "*") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value *= operand;
        } else if (command == "/") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value /= operand;
        } else if (command == "**") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value = std::pow(current_value, operand);
        } else if (command == "=") {
            std::cout << current_value << std::endl;
        } else if (command == ":") {
            Number operand;
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value = operand;
        } else if (command == "c") {
            current_value = 0;
        } else if (command == "q") {
            return true;
        } else if (command == "s") {
            memory = current_value;
            memory_set = true;
        } else if (command == "l") {
            if (memory_set) {
                current_value = memory;
            } else {
                std::cerr << "Error: Memory is empty" << std::endl;
                return false;
            }
        } else {
            std::cerr << "Error: Unknown token " << command << std::endl;
            return false;
        }
    }
    return true;
}
