//Напишите функцию, которая вычисляет факториал числа n (используя for или while).

#include <iostream> 
#include <locale>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

int number = 0;
int factorial = 1;

 std::cout << "Введите число" << std::endl;
 std::cin >> number;

 for (int i=1; i <= number; i++){
   factorial  *= i;
 }
  std::cout << "Факториал равен " << factorial ;
}
