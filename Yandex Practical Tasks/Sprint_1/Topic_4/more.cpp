//Напишите программу, которая считает целое неотрицательное число N из потока ввода и выведет его цифры в строчку в обратном порядке.
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    do {
        cout << N % 10;  
        N /= 10;         
    } while (N > 0);

    cout << endl;  
    return 0;
}
