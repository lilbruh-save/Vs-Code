    // Просто написать программу которая менят регистры
    //PrintUpper — принимает в качестве параметра строку и выводит её в верхнем регистре.
    //PrintLower — принимает в качестве параметра строку и выводит её в нижнем регистре.
    //Для преобразования символов воспользуйтесь функциями std::toupper и std::tolower из заголовочного файла cctype.
#include <iostream>
#include <string>
#include <cctype>

void PrintUpper(const std::string& str) {
    for (unsigned char c : str) {
        std::cout << static_cast<char>(std::toupper(c));
    }
    std::cout << std::endl;
}

void PrintLower(const std::string& str) {
    for (unsigned char c : str) {
        std::cout << static_cast<char>(std::tolower(c));
    }
    std::cout << std::endl;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    PrintUpper(str);
    PrintLower(str);
}