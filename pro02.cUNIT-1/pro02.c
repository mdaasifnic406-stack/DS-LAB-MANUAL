/* Q2. Create an array of size 10, input values and display sum
   and average of all elements in the array. */

#include <stdio.h>

int main()
{
    int a[10], i, sum = 0;
    float avg;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    avg = (float)sum / 10;

    printf("\nThe sum is %d", sum);
    printf("\nThe average is %.2f", avg);

    return 0;
}
