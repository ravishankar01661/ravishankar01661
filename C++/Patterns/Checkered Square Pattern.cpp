#include <iostream>
using namespace std;

int main() {
    int size = 8; // Change the size of the square pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

