#include<iostream>
int main()
{
    int x[10] ={ };
    int i=0;
    while(i<10)
    {
        x[i] =i*2;
        std::cout<<"\n|X["<<i<<"]"<<" = "<<x[i];
        i++;
    };
    // x[12] =56;
    // std::cout<<"\nX[12] "<<x[12]<<std::endl;
    // i=0;
    // while(i<120)
    // {
    //     x[i] =i*i;
    //     std::cout<<"\nX["<<i<<"]"<<" =" <<x[i]<<std::endl;
    //     i++;

    // };

    getchar();

};
