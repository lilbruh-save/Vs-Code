//Напишите программу, которая считывает из `std::cin` два числа и выводит их сумму, разницу и произведение.

#include <iostream>
#include <locale>

int main () {
    setlocale(LC_ALL, "ru_RU.UTF-8");

  //Переменные для ввода
  double first_num = 0, second_num = 0;

  //Ввод чисел
  std::cout << "Введите числа: ";
  std::cin >> first_num >> second_num;

  //работа с операциями
  double sum = first_num + second_num;
  double diff = first_num - second_num;
  double prod = first_num * second_num;

  //Вывод
  std::cout << "Сумма чисел: " << first_num << " и "
            << second_num <<" = " << sum << "\n";
  std::cout << "Разница чисел: " << first_num << " и "
            << second_num <<" = " << diff << "\n";
  std::cout << "Произведение чисел: " << first_num << " и "
            << second_num <<" = " << prod << "\n";
}