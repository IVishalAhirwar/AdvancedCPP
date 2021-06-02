#include "c01.h"

c01::c01()
{
    cout << "\nc01 Created...";
};
c01::~c01()
{
    cout << "\nc01 Destroyed...";
};

void c01::SetC01(string Org_Name, int PIN)
{
    this->Org_Name = Org_Name;
    this->PIN = PIN;
}
string c01::GetOrg()
{
    stringstream ss;
    ss << PIN;
    return "Org Name : " + Org_Name + " PIN : " + ss.str();
}
