#include <iostream>
void Sizeof()
{
    std::cout << "\nSize of Memory obj. on Your Machine\n"
              << std::endl;
    std::cout << "\nbool:   " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "\nchar:   " << sizeof(char) << " bytes" << std::endl;
    std::cout << "\nwchar_t:   " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "\nchar16_t:   " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "\nchar32_t:   " << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "\nshort   " << sizeof(short) << " bytes" << std::endl;
    std::cout << "\nint:   " << sizeof(int) << " bytes" << std::endl;
    std::cout << "\nlong:   " << sizeof(long) << " bytes" << std::endl;
    std::cout << "\nlong long:   " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "\nfloat:   " << sizeof(float) << " bytes" << std::endl;
    std::cout << "\ndouble:   " << sizeof(double) << " bytes" << std::endl;
    std::cout << "\nlong double:   " << sizeof(long double) << " bytes" << std::endl;
    // std::cout<<sizeof((int)void);
    std::cout << "\nQUIT!" << std::endl;
    int x;
    std::cin >> x;
};
int main()
{
    Sizeof();
    Sizeof();
    Sizeof();
    Sizeof();
    Sizeof();
    Sizeof();
    Sizeof();
    Sizeof();

    return 0;
}