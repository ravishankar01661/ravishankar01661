#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i || j == (size - i - 1) || i == 0 || i == size - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

