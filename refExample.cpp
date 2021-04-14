#include <iostream>
#include <string>
int main()
{
    std::string Fname{"Vishal."};
    std::string Lname{"Choudhary."};
    std::cout << "First Name: " << &Fname << "\n"
              << "Last Name: " << &Lname;
    //After ref.
    std::string &Fx = Fname;
    std::cout<<"Address of Fx "<<&Fx;
    std::cout << "\nFirst Name: " << &Fx;
    std::cout << "\nLast Name: " << &Lname;
    Fx = Lname;
    std::cout<<"Adress of Fx: "<<&Fx;
    std::cout << "First Name: " << &Fname;
    std::cout << "Last Name: " << &Lname;

    std::cin.get();
    return 0;
};