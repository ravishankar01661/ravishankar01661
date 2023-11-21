#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern
    int num = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}

