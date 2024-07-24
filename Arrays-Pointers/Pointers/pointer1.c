#include <stdio.h>

int main(void) {
        int num = 10;
        int *ptr = &num; //'ptr' is a pointer to an integer

        printf("Value of num: %d\n", num);
        printf("Address of num: %p\n", (void *)&num);
        printf("Value stored in ptr: %p\n", (void *)ptr);
        printf("Value pointed to by ptr: %d\n", *ptr);

        return 0;
}