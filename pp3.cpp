//Copyright©2021 Vishal Ahirwar.
#include <stdio.h>
#include <conio.h>
int GetSumOfArrayElements(int A[],const int& size);
// int GetSizeOfArray(int A[])
// {
//     int size =sizeof() / sizeof(A[0]);// Why it is not Giving meSize of Array;
//     return size;

// };

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size =sizeof(A)/sizeof(A[0]);// but here it's giving right size of Array.
    printf("%d",size);
    printf("Total Sum Of Elements Store in Array A[] =%d", GetSumOfArrayElements(A,size));
    return 0;
};
int GetSumOfArrayElements(int A[],const int& size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(A + i);
        // printf("\n%d\n",*(A+i));

    };
    return sum;
};

