#include <stdio.h>
#include <conio.h>

int main()
{
    int *p;
    int x[3];
    p = x;
    *p = 120;
    *(p + 1) = 110;
    *(p + 2) = 100;
    *(x + 1) = 90;
    printf(
        "Address Store pointer p =%d"
        "\nAddress of x =%d"
        "\nValue Store in pointer p location =%d"
        "\nValue Store in x =%d",
        p,
        x,
        *(p + 1),
        x[2]);
    getchar();

    return 0;
};
