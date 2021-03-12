#include <cstdio>
class C01
{
    int Age{0};
    const char *Name = "";
    char *Location = "";

public:
    void SetName(const char *value);
    void SetLocation(char *value);
    void SetAge(int age);
   const char *GetName() const;
    char *GetLocation() const;
    int GetAge() const;
};
int C01::GetAge() const
{
    return Age;
};
 const char *C01::GetName() const
{
    return Name;
};
char *C01::GetLocation() const
{
    return Location;
};
void C01::SetLocation(char *value)
{
    Location = value;
}
void C01::SetName(const char *value)
{
    Name = value;
};
void C01::SetAge(int age)
{
    Age = age;
};
main()
{
    C01 c01;
    printf("\nName: %s\nLocation: %s\nAge: %d", c01.GetName(), c01.GetLocation(), c01.GetAge());
    c01.SetName("ImVishal.");
    c01.SetLocation("Mars.");
    c01.SetAge(17);
    printf("After Creating and Editing Obj...");
    printf("\nName: %s\nLocation: %s\nAge: %d", c01.GetName(), c01.GetLocation(), c01.GetAge());
};

