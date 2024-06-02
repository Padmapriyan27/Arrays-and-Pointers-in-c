/*
 Program to find the average of n numbers using arrays
*/

#include <stdio.h>

int main() {
    int marks[10], n,sum = 0;
    double avg;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum +=marks[i];
    }
    printf("\n");

    avg = (double) sum / n;
    printf("AVG : %.2lf\n", avg);

    return 0;
}