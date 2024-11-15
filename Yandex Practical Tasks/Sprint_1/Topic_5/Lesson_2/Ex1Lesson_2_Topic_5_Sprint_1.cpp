// Просто написать программу которая менят регистры
//PrintUpper — принимает в качестве параметра строку и выводит её в верхнем регистре.
//PrintLower — принимает в качестве параметра строку и выводит её в нижнем регистре.
//Для преобразования символов воспользуйтесь функциями std::toupper и std::tolower из заголовочного файла cctype.
#include <iostream>
#include <string>
#include <cctype>

//Написаить функции

int main() {
    std::string str;
    std::getline(std::cin, str);
    PrintUpper(str);
    PrintLower(str);
}