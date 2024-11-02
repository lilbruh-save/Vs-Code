//Напишите программу, которая по введённой из потока строке проверит, является ли эта строка адресом электронной почты или нет. Если строка является email-адресом, то вывести строку Корректный email, иначе — Некорректный email.
#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string line;
    std::getline(std::cin, line);

    // Слово const перед типом показывает, что мы
    // не будем менять значение переменной.
    const std::string correct_symbols = 
         "abcdefghijklmnopqrstuvwxyz"
         "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
         "0123456789._-+@";
         //Мега говно (())
}