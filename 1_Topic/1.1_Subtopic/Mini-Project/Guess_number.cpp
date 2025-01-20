/*Игра «Угадай число»

Идея: Генерировать случайное число (1–100), пользователь пытается угадать, программа подсказывает «меньше/больше».
Навык: Циклы, ветвления, работа со случайными числами (<cstdlib> / <random>). */


//IDEA Проанализирывать код;

#include <iostream>
#include <cstdlib> // Для rand() и srand()
#include <ctime>   // Для функции time()

using namespace std;

int main() {
    // Генерируем случайное число от 1 до 100
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел
    int secretNumber = rand() % 100 + 1;      // Случайное число от 1 до 100

    cout << "Игра: Угадай число!" << endl;
    cout << "Я загадал число от 1 до 100. Попробуй его угадать!" << endl;

    int guess = 0; // Переменная для хранения догадки пользователя
    int attempts = 0; // Счётчик попыток

    while (true) {
        cout << "Введите ваше предположение: ";
        cin >> guess;

        ++attempts; // Увеличиваем количество попыток

        if (guess < secretNumber) {
            cout << "Моё число больше." << endl;
        } else if (guess > secretNumber) {
            cout << "Моё число меньше." << endl;
        } else {
            cout << "Поздравляю! Вы угадали число за " << attempts << " попыток." << endl;
            break; // Выход из цикла, если число угадано
        }
    }

    return 0;
}
