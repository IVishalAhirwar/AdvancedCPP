#include <cstdio>
//Advanced topic on Cpp class and struct
//code written by Vishal Choudhry.
class C1
{
    int age{0};

public:
    void SetValue(const int &);
    int GetValue() const;
};
void C1::SetValue(const int &Value)
{
    age = Value;
};
int C1::GetValue() const
{
    return age;
}

int main()
{
    C1 P1;
    printf("Private Member Age Value is: %d\n", P1.GetValue());
    P1.SetValue(120);
    printf("Private Member Age is: %d\n", P1.GetValue());
    return 0;
}