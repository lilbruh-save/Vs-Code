/*Ты должен вывести последовательность чисел от 1 до определённого числа (например, до 100). Однако вместо некоторых чисел ты будешь выводить слова:

Если число делится на 3 без остатка, вместо числа нужно вывести "Fizz".
Если число делится на 5 без остатка, вместо числа нужно вывести "Buzz".
Если число делится на 15 без остатка (т.е. оно одновременно кратно и 3, и 5), нужно вывести "FizzBuzz".
Если число не делится ни на 3, ни на 5, выводится само число.*/

#include <iostream>
#include <locale> 

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

  //Рабочий цикл
  for (int i=1; i <= 100; i++){
    if (i % 15 == 0){
      std::cout << "FizzBuzz\n";
    }
    else  if (i % 3 == 0){
      std::cout << "Fizz\n";
    }
    else if (i % 5 == 0){
      std::cout << "Buzz\n";
    }
    else { std::cout << i << "\n"; }
  }
  return 0;
}