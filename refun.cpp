#include<iostream>
void ChangeName( std::string&Name)
{
    char*Wel{
        "\t\t\t\t|-----------------------------------------------------|\n"
        "\t\t\t\t|-----------------WELCOME-----------------------------|\n"
        "\t\t\t\t|-----------------WELCOME-----------------------------|\n"
        "\t\t\t\t|-----------------WELCOME-----------------------------|\n"
        "\t\t\t\t|-----------------WELCOME-----------------------------|\n"
        "\t\t\t\t|-----------------WELCOME-----------------------------|\n"
        "\t\t\t\t|-----------------------------------------------------|\n"
    };
    std::cout<<Wel;
    std::cout<<Name;
    Name=Name+" Choudhary";

};
int main()
{
    std::string Name;
    std::cin>>Name;
    ChangeName(Name);
    std::cout<<Name;
    std::cin.clear();
    std::cin>>Name;
    return 0;
    
}