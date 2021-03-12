#include "class4.h"
void C01::SetName(std::string Value)
{
    Name = Value;
};
void C01::SetLocation(std::string Value)
{
    Location = Value;
};
void C01::SetAge(int Value)
{
    age = Value;
};
std::string C01::GetName() const
{
    return Name;
};
std::string C01::GetLocation() const
{
    return Location;
};
int C01::GetAge() const
{
    return age;
};