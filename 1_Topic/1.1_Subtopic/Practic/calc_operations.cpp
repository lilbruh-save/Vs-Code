//Напишите программу, которая считывает из `std::cin` два числа и выводит их сумму, разницу и произведение.
# include <iostream>

int main () {
  double x, y;

  // Считываем два числа 
  std::cout << "Введите числа";
  std::cin >> x >> y;

  // Проводим операции
  double sum = x + y;
  double diff = x - y;
  double product = x * y;

  // Выводим результат
  std::cout << "Сумма: " << sum << std::endl;
  std::cout << "разница: " << diff << std::endl;
  std::cout << "Произведение : " <<  product << std::endl;

  return 0;
}