#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 34};
    int *ptr = arr;          // Pointer points to the first element
    int max = *ptr;

    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    cout << "Maximum element = " << max << endl;

    return 0;
}