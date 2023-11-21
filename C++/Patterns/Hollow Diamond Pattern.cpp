#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern
    int spaces = size - 1;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }
        spaces--;

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    spaces = 1;

    for (int i = 1; i <= size - 1; i++) {
        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }
        spaces++;

        for (int j = 1; j <= 2 * (size - i) - 1; j++) {
            if (j == 1 || j == 2 * (size - i) - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

