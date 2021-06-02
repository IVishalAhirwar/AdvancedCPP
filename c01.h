
#ifndef _C01_
#define _C01_
#include <iostream>
#include <sstream>
using namespace std;
class c01
{
private:
    string Org_Name{" "};
    int PIN{0};

public:
    c01();
    ~c01();
    void SetC01(string Org_Name, int PIN = 0000);
    string GetOrg();
};
#endif