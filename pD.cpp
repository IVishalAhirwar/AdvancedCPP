#include<iostream>


// class VongoDB
// {
//     private:
//    // VongoDB(const VongoDB& DB);
//    // VongoDB();
//     ~VongoDB();
//     public:
//     static void DestroyInstance(VongoDB* pInstance)
//     {
//         delete pInstance;
//         std::cout<<"VongoDB Deleted!"<<std::endl;
//     };
// };
// VongoDB::~VongoDB()
// {

// };
class Human
{
    private:
    int DNA;
    public:
    Human(const Human& human);
    void DoSomething(Human& hm);
};
Human::Human(const Human& human)
{
    std::cout<<"Copy Contructor Called!"<<std::endl;
    this->DNA =human.DNA;
};
void Human::DoSomething(Human& hm)
{
    std::cout<<"Do SomeThing Function() Called!"<<std::endl;
};



int main()
{
    // VongoDB* DB1 =new VongoDB();
    // VongoDB::DestroyInstance(DB1);
    //Human* hm = new Human;
    return 0;
}
