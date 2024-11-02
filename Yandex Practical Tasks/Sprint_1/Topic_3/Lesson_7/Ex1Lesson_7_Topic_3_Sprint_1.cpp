//функция замены — поиска подстроки и замены на другую строку
//Прочитайте три строки:
//1 Строку, В которой производится замена - СТРОКА
//2 Строку, которую нужно заменить - СЛОВО
//3 Строку, НА которую нужно заменить - НОВОЕ СЛОВО
#include <string>
#include <iostream>
using namespace std;

int main() {
    int poz;
    std::string haystack, needle, replacement;
    std::getline(std::cin, haystack);
    std::getline(std::cin, needle);
    std::getline(std::cin, replacement);

    poz = haystack.find(needle);
    
    if (poz != string::npos ){
      int length = needle.size();

      haystack.replace(poz, length, replacement);
    }
    std::cout << haystack << std::endl;
}