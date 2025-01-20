#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "ru-RU.UTF-8");

    // Переменные
    int n;                      // Количество чисел в ряду Фибоначчи
    int first_num = 0;          // Первое число ряда
    int second_num = 1;         // Второе число ряда

    // Ввод количества чисел
    std::cout << "Введите количество чисел в ряду Фибоначчи: ";
    std::cin >> n;

    // Проверка на корректность ввода
    if (n <= 0) {
        std::cout << "Количество чисел должно быть больше 0." << std::endl;
        return 0;
    }

    // Генерация и вывод ряда Фибоначчи
    std::cout << "Ряд Фибоначчи: ";
    for (int i = 1; i <= n; i++) {
        std::cout << first_num << " ";          // Вывод текущего числа
        int next_num = first_num + second_num; // Вычисление следующего числа
        first_num = second_num;               // Сдвигаем первое число
        second_num = next_num;                // Сдвигаем второе число
    }

    std::cout << std::endl;
    return 0;
}
