#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern

    for (int i = 1; i <= size; i++) {
        for (int j = i; j < size; j++) {
            cout << " ";
        }
        for (int j = 1; j <= size; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

