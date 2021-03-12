#include <cstdio>
#include <string>
#include <iostream>
class C01
{
    std::string Name;
    std::string Location;
    int age{0};

public:
    //Getters
    std::string GetName() const;
    std::string GetLocation() const;
    int GetAge() const;
    //setters
    void SetName(std::string Value);
    void SetLocation(std::string Value);
    void SetAge(int Value);
};
