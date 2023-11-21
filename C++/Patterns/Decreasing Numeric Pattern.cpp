#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern

    for (int i = 0; i < size; i++) {
        for (int j = size - i; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

