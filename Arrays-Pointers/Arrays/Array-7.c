#include <stdio.h>

int arr[4][4] = {};

void set_arr(int row,int col) {
    for(int i = 1;i <= 4;i++){
        arr[row][i] = 0;
        arr[i][col] = 0;
    }
}

void print_arr() {
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int row, col;
     for(int i = 1;i <= 4;i++){
        for(int j = 1;j <= 4;j++){
            arr[i][j] = 1;
        }
    }

    print_arr();
    printf("Which row and column do you want to set (row, col): ");
    scanf("%d,%d",&row, &col);
    set_arr(row, col);
    if ( (row >= 0 && row <= 4) && (col >=0 && col <=4) ){

            set_arr(row,col);
            print_arr();
    }

     return 0;
}

