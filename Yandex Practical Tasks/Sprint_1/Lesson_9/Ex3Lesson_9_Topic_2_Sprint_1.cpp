#include <iostream>

int main() {
    int day_of_week, days_passed;

    // Ввод данных
    std::cin >> day_of_week >> days_passed;

    // Вычисление количества прошедших недель
    int weeks_passed = days_passed / 7;

    // Вычисление номера текущего дня недели
    int current_day = ((day_of_week + days_passed - 1) % 7) + 1;

    // Вывод результатов
    std::cout << weeks_passed << std::endl;
    std::cout << current_day << std::endl;

    return 0;
}