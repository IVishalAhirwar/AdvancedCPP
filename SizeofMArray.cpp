#include <iostream>
int main()
{
    std::string GName[][3] = {
        {"boy-01", "boy-02", "boy-03"},
        {"girl-01", "girl-02", "girl-03"}};
    for (int i = 0; i < sizeof(GName) / sizeof(GName[0]); i++)
    {
        for (int j = 0; j < sizeof(GName[0]) / sizeof(std::string); j++)
        {
            std::cout << GName[i][j];
            std::cout << ",";
        };
        std::cout << "\n\n";
    };
    getchar();

    return 0;
};
