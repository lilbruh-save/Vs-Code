//Напишите функцию, которая вычисляет факториал числа n (используя for).

#include <iostream>
#include <locale>

int main() {
  setlocale(LC_ALL, "ru-RU.UTF-8");

int sum =1, n=0;

//Ввод числа 
std::cout << "Введите число для вычисление факториала: " 
<< std::endl;
std::cin >> n;

//вычисление факториала
for(int i=1; i <= n; i++){
  sum *= i;
}

//Вывод результатов 
std::cout << "Факториал " << n << " = " << sum;

}