//Напишите программу, которая считает из потока ввода три целых числа — N, M, K — и выведет в ответ их медиану.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {

int M, N, K;
cin >> M >> N >> K;

//нахождение среднего числа
 if ((M <= N && N <= K) || (K <= N && N <= M)) {
        cout << N << endl;
    } else if ((N <= M && M <= K) || (K <= M && M <= N)) {
        cout << M << endl;
    } else {
        cout << K << endl;
    }
}