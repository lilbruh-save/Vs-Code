#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A < B) {
        for (int i = A; i <= B; ++i) {
            if (i % 2 != 0) {
                cout << i << endl;
            }
        }
    } else {
        for (int i = A; i >= B; --i) {
            if (i % 2 != 0) {
                cout << i << endl;
            }
        }
    }

    return 0;
}
