#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern
    int value = 1;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < size; j++) {
                cout << value++ << " ";
            }
        } else {
            value += size - 1;
            for (int j = 0; j < size; j++) {
                cout << value-- << " ";
            }
            value += size + 1;
        }
        cout << endl;
    }

    return 0;
}

