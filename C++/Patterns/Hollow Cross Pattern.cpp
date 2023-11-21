#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2 || j == size / 2 || (i == 0 && j != size - 1 && j != 0) || (i == size - 1 && j != size - 1 && j != 0)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

