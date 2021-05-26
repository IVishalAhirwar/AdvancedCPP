#include <stdio.h>
#include <conio.h>

int main()
{
    int Ix[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            printf("%d", Ix[i][j]);
            printf("|");
        };
        printf("\n");
    };
    getch();

    return 0;
}