#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter value of a, b, c :");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("real number");
    }
    else if (d == 0)
    {
        printf("equal roots");
    }
    else
    {
        printf("imaginary roots");
    }
}