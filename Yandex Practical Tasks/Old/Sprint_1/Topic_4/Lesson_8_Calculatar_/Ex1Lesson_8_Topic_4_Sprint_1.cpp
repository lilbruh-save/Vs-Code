//В этой задаче нужно поддержать выражения из любого количества операций.Выражения состоят из чисел и знаков операций — +, -, *, /, заканчиваются знаком =. Калькулятор должен посчитать корректный результат, учитывая, что мультипликативные операции (*, /) имеют приоритет над аддитивными (+, -).
#include <iostream>
#include <string>
//Входные данные 2 * 3 - 4 * 4 + 6 + 1 * -1 * 42 = 
int main() {
    std::string op;
    double left, right;
    bool checked = true;

    std::cin >> left;

    double cur_sum = 0;

    while (checked) {
        std::cin >> op;
        if (op == "=") {
            cur_sum += left;
            break;
        }

        std::cin >> right;

        if (op == "+") {
            cur_sum += left;
            left = right;
        } else if (op == "-") {
            cur_sum += left;
            left = -right;
        } else if (op == "*") {
            left *= right;
        } else if (op == "/") {
            left /= right;
        }
    }
    std::cout << cur_sum << std::endl;
}
//сночала считываеться первое число потом в цикле считывваеться знак и второе число и проводятьсчя опрацуии