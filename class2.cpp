#include <cstdio>
//Advanced topic on Cpp class and struct
//code written by Vishal Choudhry.
//Struct
struct S01
{
    char *Name = "";
    int age{0};
    char *Location = "";
};

main()
{
    S01 s01, s02, s03, s04;
    printf("\n************S01***********\n");
    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s01.Name, s01.age, s01.Location);
    printf("\n************S02***********\n");
    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s02.Name, s02.age, s02.Location);
    printf("\n************S03***********\n");
    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s03.Name, s03.age, s03.Location);
    printf("\n************S04***********\n");
    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s04.Name, s04.age, s04.Location);
    printf("After Creating S01 obj and Setting Up Member..\n");
    s01.Name = "Vishal Choudhry.";
    s01.age = 17;
    s01.Location = "Earth M.P.";
    s02.Name = "U9me.";
    s02.age = 17;
    s02.Location = "Earth X.P.";
    s03.Name = "Norule Gaming Studio.";
    s03.age = 170000;
    s03.Location = "Earth V.P.";
    s04.Name = "ImVishal.";
    s04.age = 17;
    s04.Location = "Earth C.P.";
    printf("\n************S01***********\n");
    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s01.Name, s01.age, s01.Location);
    printf("\n************S02***********\n");

    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s02.Name, s02.age, s02.Location);
    printf("\n************S03***********\n");
    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s03.Name, s03.age, s03.Location);
    printf("\n************S04***********\n");
    printf("\nName: %s\n\nAge: %d\n\nLocation: %s", s04.Name, s04.age, s04.Location);
};
