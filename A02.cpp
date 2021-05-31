#include <iostream>

int main()
{
    int an[][2] = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5},
        {5, 6},
        {6, 7},
        {7, 8},
        {8, 9},
        {9, 0}};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // std::cout<<std::endl;
            std::cout << an[i][j];
            std::cout << ", ";
        };
        std::cout << "\n\n";
    };
    getchar();

    return 0;
}
