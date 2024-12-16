/*Сколько суток в миллионе секунд? Программа, которую вам предстоит написать, с лёгкостью ответит на этот вопрос.*/

#include <iostream>

int main () {
  int seconds;
  std::cin >> seconds;

  //вычисление дней
  int day = seconds / (60 * 60 * 24);

  //кол-во оставшихся секунд
  seconds %= (60 * 60 * 24);

  //вычисление часов
  int hours =  seconds / 3600;
    seconds %= 3600;

  //вычисление минут 
  int minutes = seconds / 60;
    seconds %= 60;

  //вывод результата
  std::cout << day <<" суток "<< hours <<" часов "
            << minutes <<" минут "<< seconds <<" секунд"<< std::endl;

}