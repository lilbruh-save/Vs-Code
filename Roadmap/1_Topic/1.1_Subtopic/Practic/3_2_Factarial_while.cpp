//Ru-Напишите функцию, которая вычисляет факториал числа n (используя  while).
//En-Write a function that calculates the factorial of a number n (using while)

#include <iostream> 
#include <locale>

int main () {
    setlocale(LC_ALL, "ru-RU.YTF-8");
  
  //Creating a variable
  int n = 0, factorial = 1, i = 1;

  //Entering variable
  std::cout << "Enter the number: \n";
  std:: cin >> n;

  //Calculating the factorial
  while (i <= n)
  {
    factorial *= i;
    i++;
  }

  //Result
  std::cout << "Factorial " << n << " equal: " 
  << factorial; 
  
}