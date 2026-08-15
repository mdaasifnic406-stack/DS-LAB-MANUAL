// Q4. Create arrays A, B of size 3, C of size 6, merge A and B into C.

#include <stdio.h>

int main()
{
    int a[3], b[3], c[6];
    int i, j = 0;

    printf("Enter 3 elements for A:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter element %d of A: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter 3 elements for B:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter element %d of B: ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\nElements entered for A:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Position %d = %d\n", i + 1, a[i]);
    }

    printf("\nElements entered for B:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Position %d = %d\n", i + 1, b[i]);
    }

    // Copy A into C
    for (i = 0; i < 3; i++)
    {
        c[j] = a[i];
        j++;
    }

    // Copy B into C
    for (i = 0; i < 3; i++)
    {
        c[j] = b[i];
        j++;
    }

    printf("\nElements of C after merging A and B:\n");
    for (i = 0; i < 6; i++)
    {
        printf("Position %d = %d\n", i + 1, c[i]);
    }

    return 0;
}
