#include <iostream>
#include <string>
// std::string GetInput()
// {

// };

int main()
{
    std::string Input;
    std::cout << "Enter Sentence Without hitting Enter...";
    std::cin >> Input;
    int InputLen = Input.length();
    for (int i = 0; i < 9; i++)
    {
        for (int len = 0; len <= InputLen; len++)
        {
            std::cout << " | ";
            std::cout << "___";
            std::cout << Input[len];
        };
        std::cout << "\n\t";
    };
    int x;
    std::cin>>x;
    // std::cin.clear();
    // std::cin.ignore();
    return 0;
};
