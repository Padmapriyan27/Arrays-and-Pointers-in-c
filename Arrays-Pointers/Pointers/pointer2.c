#include <stdio.h>

int main(void) {
        char ch = 'A';
	char *ptr = &ch;

	printf("Value of ch: %c\n", ch);
	printf("Address of ch: %p\n", (void *)&ch);
	printf("Value stored in ptr: %p\n", (void *)ptr);
	printf("Value pointed to by ptr: %c\n", *ptr);

	return 0;
}