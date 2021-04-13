#include <iostream>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char *Welcome{
        "\t\t\t\t_________________________\n"
        "\t\t\t\t*    Vishal Choudhary   *\n"
        "\t\t\t\t_________________________\n"
        "\t\t\t\t|        Welcome        |\n"
        "\t\t\t\t|    Vishal Choudhary   |\n"
        "\t\t\t\t|  I Love C/C++ So Much |\n"

    };
    char *loading{
        "\t\t\t\t|      Loading...       |\n"

    };
    char *wait{
        "\t\t\t\t|    Please Wait...     |\n"};
    //std::cout<<""
    std::cout << loading;
    _sleep(2000);
    system("CLS");
    //std::cout<<"\a";
    std::cout << wait;
    _sleep(4000);
    system("CLS");
    std::cout << Welcome;
    std::cin.get();
    return 0;
}