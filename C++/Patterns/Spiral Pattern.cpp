#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size of the square pattern
    int top = 0, bottom = size - 1, left = 0, right = size - 1;
    int dir = 0;

    int matrix[size][size];

    while (top <= bottom && left <= right) {
        if (dir == 0) {
            for (int i = left; i <= right; i++) {
                cout << "* ";
            }
            top++;
        } else if (dir == 1) {
            for (int i = top; i <= bottom; i++) {
                cout << "* ";
            }
            right--;
        } else if (dir == 2) {
            for (int i = right; i >= left; i--) {
                cout << "* ";
            }
            bottom--;
        } else if (dir == 3) {
            for (int i = bottom; i >= top; i--) {
                cout << "* ";
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }

    return 0;
}

