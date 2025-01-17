//Реализуйте калькулятор для четырёх операций (+, -, *, /) с помощью `switch`.

#include <iostream>
#include <locale> 
#include <sstream>

int main() {
    setlocale(LC_ALL, "ru-RU.UTF-8");

  std::string full_num = 0;
  double first_num = 0, secend_num = 0;
  char symbol = '\0';

  //Ввод ворожения
  std::cout << "Введите арифметическое выражение \n";
  std::cin >> full_num;

  //Разделение переменой на значения 
  std::stringstream ss(full_num);
  ss >> first_num >> symbol >> secend_num;

  //Блок проверки на неверный ввод
/*Я хочу добавить блок проверки на верный ввод чисел и символов но не знаю как это сделать*/

  //функционал калькулятора
  switch (symbol)
  {
  case '+':
    std::cout << "Сумма чисел " << first_num 
    << " и " << secend_num << " = " <<first_num + secend_num 
    << std::endl;
    break;
      case '-':
    std::cout << "Разность чисел " << first_num 
    << " и " << secend_num << " = " <<first_num - secend_num 
    << std::endl;
    break;
      case '*':
    std::cout << "Произведение чисел " << first_num 
    << " и " << secend_num << " = " <<first_num * secend_num 
    << std::endl;
    break;
      case '/':
        if (first_num || secend_num == 0){
    std::cerr << "Делить на ноль нельзя" << std::endl; }
    else {
    std::cout << "Частное чисел " << first_num 
    << " и " << secend_num << " = " <<first_num / secend_num 
    << std::endl; }
    break;
  
  default:
  std::cout << "Неверно введен знак";
    break;
  }
  return 0;
}