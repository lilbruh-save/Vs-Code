//Необходимо написать функцию PrintCenter, которая: Получает на вход строку и целое неотрицательное число n. Строка состоит из латинских букв, пробелов и знаков препинания. Выводит строку, состоящую ровно из n символов, в которой считанная строка располагается по центру, а пустые места слева и справа строки заполнены символами =.
//Если слева и справа не получается сделать одинаковое количество символов =, то надпись нужно «прижать» влево (см. примеры). Если длина введённой строки больше, чем n, то нужно вывести первые n символов этой строки.
#include <iostream>
#include <string>

std::string PrintCenter (std::string word, int fillCount){
  char fillChar = '=';
  std::string purefix(fillChar, fillCount);
  std::string suffix (fillChar, fillCount);

  return purefix + word + suffix;
}

int main() {
    std::string str;
    std::getline(std::cin, str);

    int n;
    std::cin >> n;

    PrintCenter(str, n);
}