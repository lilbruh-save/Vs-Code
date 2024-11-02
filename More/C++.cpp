
#include <iostream>

// Это декларация — позволит использовать 
// функцию внутри вашей программы.
bool IsPrime(int);

int main() {
    int i=1, n=1;
    while (i <= 100){
        if (n % i == 0){
            std::cout << n <<std::endl;
            
        }
        n++; i++;
    }
}