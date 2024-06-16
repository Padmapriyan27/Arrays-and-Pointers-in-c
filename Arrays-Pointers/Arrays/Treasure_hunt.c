#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5
#define TREASURE 'T'
#define EMPTY '.'

//Function prototypes
void set_Array(char arr[ROWS][COLS]);
void place_Treasure(char arr[ROWS][COLS]);
void print_Array(char arr[ROWS][COLS]);
int hunt(char arr[ROWS][COLS], int row, int col);

int main(){
    char arr[ROWS][COLS];
    int row, col;
    int flag = 0;

    srand(time(NULL));

    set_Array(arr);
    print_Array(arr);
    place_Treasure(arr);

    printf("Welcome to LAHTP Treasure hunt...\n");

    while(!flag){
       printf("Enter the row (0-%d) and col (0-%d) to search (EX: 1,2): ", ROWS-1, COLS-1);
       scanf("%d,%d", &row, &col);
       if(row >= 0 && row < ROWS && col >= 0 && col < COLS){
        flag = hunt(arr, row, col);
       } else{
        printf("Invalid coordinate, please try again...\n");
       }
    }

    printf("Congratulations! You found the treasure at (%d, %d)!\n", row, col);
    print_Array(arr);

    return 0;
}

//Function to set the Array vaules as empty
void set_Array(char arr[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0 ; j < COLS; j++){
            arr[i][j] = EMPTY;
        }
    }
}

void place_Treasure(char arr[ROWS][COLS]){
    int row = rand() % ROWS;
    int col = rand() % COLS;
    arr[row][col] = TREASURE;
}

void print_Array(char arr[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}

int hunt(char arr[ROWS][COLS], int row, int col){
    if(arr[row][col] == TREASURE){
        return 1;
    } else{
        printf("No Treasure at %d %d, Keep searching! \n", row, col);
        return 0;
    }
}