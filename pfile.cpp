#include <stdio.h>
#include <conio.h>

int main()
{
    // int age{0};
    // int *pAge;
    // puts("Enter Age>>");
    // scanf("%d", &age);
    // printf("Age is :<%d>", age);
    // pAge = &age;
    // printf("Address of p<%d>\nAddress of *p<%d>\n Value of *p<%d> ",
    //        &pAge,
    //        pAge,
    //        *pAge);
    int *age;
    int a = 90;
    age = &a;
    char *x;
    x = "<>";
    printf("Address of age<%d>"
           "\n"
           "Address of a<%d>"
           "\n"
           "Value of age<%d>"
           "\n"
           "Value of a<%d>",
           &age,
           &a,
           *age,
           a);
    // age =(char*)&x;
    age = (int *)x;
    printf("Address of age<%c>"
           "\n"
           "Address of x<%c>"
           "\n"
           "Value of age<%c>"
           "\n"
           "Value of x<%c>",
           &age,
           &x,
           *age,
           x);

    // int a=getc(a);

    return 0;
};
