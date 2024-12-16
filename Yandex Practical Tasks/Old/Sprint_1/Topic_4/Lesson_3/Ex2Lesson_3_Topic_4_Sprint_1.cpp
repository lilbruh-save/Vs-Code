//unsigned int 
//Напишите программу обратного отсчёта, которая должна вывести в поток вывода построчно числа от N до 0, а за ними на следующей строке слово GO!
#include <iostream>
using namespace std;

int main(){

unsigned int N;
cin >> N;

for (; N>0; --N){
cout << N << endl;
}
cout << "0" << endl;
cout << "GO!" << endl;
}