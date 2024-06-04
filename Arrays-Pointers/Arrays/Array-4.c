#include <stdio.h>

int main() {
    int arr[5];

    //1D array initialization using for loop
    for(int i=0; i<5; i++) {
        arr[i] = i * i - 2 * i + 1;
    }

    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}