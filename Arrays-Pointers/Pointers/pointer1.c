# include <stdio.h>

int main()
{
	int a = 10;

        //pointer declaration and initialization
        int *p = &a;

        printf("Address stored in (*p): %p\n", p);    // Address of "a"
        printf("value stored in a: %d\n", a);         // value of "a"
        printf("value stored in (*p): %d\n", *p);     // value of "*p"

        return 0;
}