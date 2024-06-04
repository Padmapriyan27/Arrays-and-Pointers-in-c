#include <stdio.h>

int main() {
    char arr[6] = {'s', 'u', 'r', 'y', 'a'};

    int i = 0;
    while(arr[i]) {
        printf("%c", arr[i++]);
    }

    return 0;
}