//Modifying array element
#include <stdio.h>

int main(int argc, char  *argv[]) {
    char s[] = {10, 20, 30, 40, 50}; //array declaration and initialization
    
    printf("The array elements before: ");
    for(int i=0; i<5; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");

    s[3] = 42;//modifying element at index 3

    printf("The array element after  : ");
    for(int i=0; i<5; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    return 0;
}
