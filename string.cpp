#include <iostream>
#include <string>
/*
!i!
                   Copyright©2021 The Ving.
                Code Written By Vishal choudhry.
              


!i!
*/
int main()
{
    // std::string str[9000000000000000000000000]; this will crash program
    //long long  sn;
    //std::string str=std::string(std::cin.get());
    std::string str;
    std::cin >> str;
    std::cout << "string is || " << str;
    std::cout << "||THE SIZE OF STRING|| " << sizeof(str);
    std::cin >> str[0];
    std::cout << "string is || " << str;
    int len = str.length();
    for (int i = 0; i <= len; i++)
    {
        std::cout << " | ";
        std::cout << str[i];
    };

    return 0;
};