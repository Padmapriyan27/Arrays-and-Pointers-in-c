#include <stdio.h>

int main() {
    int arr[4][4] = {};
     for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            arr[i][j] = 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
     }

     return 0;
}