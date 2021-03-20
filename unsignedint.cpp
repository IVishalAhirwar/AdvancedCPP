#include <iostream>
int main()
{
    //unsigned integers can hold only non-negative numbers
    unsigned short us{65535};
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;
    // std::cout<<"ENTER VALUE FOR UNSIGNED SHORT: ";
    // std::cin>>us;
    std::cout << "\nUS: " << us;
    us = 65536;
    std::cout << "\nUS: " << us;
    us = 65537;
    std::cout << "\nUS: " << us;
    return 0;
};