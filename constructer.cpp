//#include<stdio.h>
#include<cstring>
#include<iostream>
// class Cars
// {
//     private:
//     std::string CarName=" ";
//     float Price=0.f;
//     public:
//     Cars();
//     Cars(std::string CarName,float price);
//     std::string GetCarName()const;
//     float GetPrice()const;
//     //void SetCarName_Price();

// };
// Cars::Cars()
// {
//     std::cout<<"\nDefault Constructer Called!.";
//     CarName="Range Rove.";
//     Price=75.f;
//     std::cout<<"\nCar Name: "<<CarName;
//     std::cout<<"\nPrice:"<<Price;

// };
// Cars::Cars(std::string CarName,float Price)
// {
//    this->CarName=CarName;
//    this->Price=Price;
// };
// std::string Cars::GetCarName()const
// {
//     return CarName;
// };
// float Cars::GetPrice()const
// {
//     return Price;
// };
class vString
{
    private:
    char*buffer;
    //~vString();
    public:
    vString(const char*InitString);
    ~vString();
    const char*GetvString()const;
};
vString::vString(const char*InitString)
{
    buffer=new char[strlen(InitString)];
    strcpy(buffer,InitString);
};
vString::~vString()
{
  //  vString del("DeAllocating Memory...");
   // std::cout<<del;
   std::cout<<"Deallocating Memory...";
    delete[]buffer;
};
const char* vString::GetvString()const
{
    return buffer;
};
int main()
{
    // Cars c01,c02("\nTesla",12.f);
    // std::cout<<"\nc02 Car Name: "<<c02.GetCarName()<<"\nPrice: "<<c02.GetPrice();
    vString vstr1("This is vstring 01 object");
    std::cout<<vstr1.GetvString();
    getchar();
    return 0;

};
