/*Напишите программу, которая:
Считывает цену товара — число типа int.
Будет по одной считывать номиналы купюр до тех пор, пока не наберётся нужная сумма.
В ответ выведет три числа на одной строке:
1. Количество купюр, которые понадобилось считать.
2. Размер сдачи.
3. Номинал последней прочитанной купюры.*/

#include <iostream> 
using namespace std;

int main(){
int N;
cin >> N;
int sum = 0;       
int count = 0;     
int last_bill = 0; 

while ( sum < N)
{
  int bill;
  cin >> bill;
  sum += bill;
  count++;
  last_bill = bill;
}
int change = sum - N;

cout << count <<" " << change <<" " <<last_bill;

}