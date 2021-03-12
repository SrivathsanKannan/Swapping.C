#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers a and b:-\n");
    scanf("%d", &a);
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nThe swapped numbers are a = %d, and b = %d", a, b);
    return 0;
}
