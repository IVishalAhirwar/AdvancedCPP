#include <iostream>
void binary(unsigned n)
{
    unsigned i;
    std::cout<<"|Binary| : ";
    for (i = (1 << 31); i > 0; i = (i >> 1))
    {
        if (n & i)
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        };
    };
}
int main()
{
    while (1)
    {
        std::cout << "<<ENTER>>";
        unsigned n;
        std::cin>>n;
        binary(n);
        std::cin.clear();
    };
    return 0;
};
