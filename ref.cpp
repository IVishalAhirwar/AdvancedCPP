#include<iostream>
int main()
{
    int a,b=a;
    int&c=a;
     std::cout<<"A: "<<a<<"\nB: "<<b;
    c=20;
     std::cout<<"A: "<<a<<"\nB: "<<b;
    c=b;
    b=5;
//c=b;

    std::cout<<"A: "<<a<<"\nB: "<<b;
    return 0;

};