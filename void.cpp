#include <iostream>
void Print(int x);
int get(void);
int main()
{
    // void x{void}; //can't declared void type variable;
    /*
    !i!!i!
        void func(){
        std::cout<<"ERROR!."; //this is also not valid.

    };
    */
    // int x{0};
    // std::cout << "ENTER:" << std::endl;
    //  std::cin >> x;
    Print(get());
    return 0;
};
void Print(int x)
{
    std::cout << "X: " << x << std::endl;
};
int get(void)
{
    int x;
    // std::cout << "X: " << x;
    std::cin >> x;
    return x;
};
