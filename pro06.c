/* Q6. Insert an element into the array at user defined position. */

#include <stdio.h>

int main()
{
    int a[20], i, pos, val, n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the new value: ");
    scanf("%d", &val);

    printf("Enter the position to insert value: ");
    scanf("%d", &pos);

    pos = pos - 1;

    if(pos < 0 || pos > n)
    {
        printf("\nInvalid position. Position must be between 1 and %d.", n + 1);
    }
    else
    {
        for(i = n; i > pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos] = val;

        printf("\nArray after insertion:\n");

        for(i = 0; i < n + 1; i++)
        {
            printf("Position %d = %d\n", i + 1, a[i]);
        }
    }

    return 0;
}
