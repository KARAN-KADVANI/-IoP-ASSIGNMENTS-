/*PROGRAM TO READ THREE NOS. AND PRINT MAX.*/

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter the value of a :");
    scanf("%d", &a);

    printf("enter the value of b :");
    scanf("%d", &b);

    printf("enter the value of c :");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
            printf("MAX is : %d", a);

        else
            printf("MAX is : %d", c);
    }

    else
    {

        if (b > c)
            printf("MAX is : %d", b);

        else
            printf("max is :%d", c);
    }
}