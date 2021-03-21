#include <iostream>
#include <time.h>
int main()
{
    std::cout << "\t\t\t\tLoading...";
    std::cout << "\n\n\n";
    _sleep(5000);
    //time(_sleep(5000));
    std::cout << "Hey!\n";
    std::cout << "Vishal Sir!";
    std::cout << "\nI'm Your Virtual Assistant V...";
    _sleep(5000); //WARNING:  warning: 'void _sleep(long unsigned int)' is deprecated [-Wdeprecated-declarations]
                  //  _sleep(5000);
    int x;
    std::cin >> x;
    return 0;
};