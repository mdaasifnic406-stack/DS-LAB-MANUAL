/* Q7. Delete an element from the array from user defined position. */

#include <stdio.h>

int main()
{
    int a[20], i, pos, n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the position to delete value: ");
    scanf("%d", &pos);

    pos = pos - 1;

    if(pos < 0 || pos >= n)
    {
        printf("\nInvalid position. Position must be between 1 and %d.", n);
    }
    else
    {
        // Shift elements to the left
        for(i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        printf("\nArray after deletion:\n");

        for(i = 0; i < n - 1; i++)
        {
            printf("Position %d = %d\n", i + 1, a[i]);
        }
    }

    return 0;
}
