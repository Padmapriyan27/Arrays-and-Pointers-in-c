/*
  Program to take 5 values from the user and store them in an array
  Print the elements stored in the array
*/

#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 integer values...\n");

    for(int i=0; i<5; i++) {
        printf("arr[%d] --> ", i);
        scanf("%d", &arr[i]);
    }

    printf("The entered values are: \n");
    for(int i=0; i<5; i++) {
        printf("arr[%d] --> %d\n", i, arr[i]);
    }

    return 0;
}
