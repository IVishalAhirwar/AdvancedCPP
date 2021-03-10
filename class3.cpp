#include <cstdio>
//Advanced topic on Cpp class and struct
//code written by Vishal Choudhry.
class C01
{
    char *Name = "";
    int age{0};
    char *Location = "";

public:
    char *GetName() const;
    char *GetLocation() const;
    int GetAge()const;

};
main()
{
    C01 c01;
    c01.SetName("Vishal Choudhry.");//how set char string using SetName
    printf("Name: %s\nLocation: %s\n", c01.GetName(), c01.GetLocation());
    //printf("Name: %s\nAge: %d\nLocation: %s",);
};