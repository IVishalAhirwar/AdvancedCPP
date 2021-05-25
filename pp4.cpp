#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char intro[] = "Hii! Im Vishal Ahirwar Video Game Programmer'\0',\nUe4 C++ Developer,\nFull Stack Web Developer,\nDrones Programmer & I love Robotics Programming!";
    int size = sizeof(intro) / sizeof(intro[0]);
    printf(">>Intro...\n%s\n>>Len >>(%d)", intro, strlen(intro));
    getch();
    return 0;
}