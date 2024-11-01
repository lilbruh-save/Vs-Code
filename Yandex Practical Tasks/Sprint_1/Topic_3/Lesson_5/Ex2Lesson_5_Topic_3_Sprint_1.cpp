//Это выражение будет true, если ладья и другая фигура находятся на одной горизонтали или вертикали, и false в противном случае.
//если хотябы ожно число совподает да если нет то нет
#include <iostream>

using namespace std;

int main(){
  int first, second, third, fourth;
  cin >> first >> second >> third >> fourth;

  (first == third || second == fourth) ? cout << "Да" : cout << "Нет";

}
