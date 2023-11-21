#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern
    char ch = 'A';

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    return 0;
}

