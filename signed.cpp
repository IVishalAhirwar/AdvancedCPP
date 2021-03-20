#include <iostream>

int main()
{
    short s{0};
    std::cin >> s;
    std::cout << "\nshort: " << s << std::endl;
    int i{0};
    std::cin >> i;
    std::cout << "\nint: " << i << std::endl;
    long l{0};
    std::cin >> l;
    std::cout << "\nlong: " << l << std::endl;
    long long ll{0};
    std::cin >> ll;
    std::cout << "\nlong long: " << ll << std::endl;
    std::cin >> s;

    return 0;
}