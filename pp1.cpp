#include <stdio.h>
#include <conio.h>
//pointer to pointer

int main()
{
    int x{1};
    int *px;
    px = &x;
    printf("Address of x =<%d>\n"
           "Value of X =<%d>\n"
           "Address of px =<%d> \n"
           "Value of px =<%d>",
           &x,
           x,
           &px,
           *px);
    int **ppx;
    ppx = &px;
    printf("Address of x =<%d>\n"
           "Value of X =<%d>\n"
           "Address of ppx =<%d> \n"
           "Value of ppx =<%d>",
           &x,
           x,
           &ppx,
           **ppx);
    int ***pppx;
    pppx = &ppx;
    printf("Address of x =<%d>\n"
           "Value of X =<%d>\n"
           "Address of pppx =<%d> \n"
           "Value of pppx =<%d>",
           &x,
           x,
           &pppx,
           ***pppx);
           getch();


    return 0;
};
