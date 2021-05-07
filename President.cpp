#include <iostream>
#include<cstring>
class President
{
private:
    char *PresidentName = nullptr;

public:
    ~President();

public:
    char *GetPresidentName() const;
    President();
    President(const char *InitStr);
    void SetNewString(const char *NewStr);
};
President::President()
{
    std::cout << "!Null No President Name Founded!\n"
              << "Default Constructor Reporting!\n";
};
President::President(const char *InitStr)
{
    if (PresidentName == nullptr)
    {
        PresidentName = new char[strlen(InitStr)];
        strcpy(PresidentName, InitStr);
    };
}
President::~President()
{
    std::cout << "Destructor Reporting !\n";
    if (PresidentName != nullptr)
        delete[] PresidentName;
};
char *President::GetPresidentName() const
{
    if (PresidentName != NULL)
    {
        return PresidentName;
    }
    else
    {
        return NULL;
    };
};

void President::SetNewString(const char *NewStr)
{
    PresidentName = nullptr;
    if (NewStr != NULL)
    {
        PresidentName = new char[strlen(NewStr)];
        strcpy(PresidentName, NewStr);
    };
};

int main()
{
    President india("Anonymous\n");
    std::cout << "India's President: " << india.GetPresidentName();
    india.SetNewString("I don\'\'t Know!\n");
    std::cout << "India's President: " << india.GetPresidentName();
    getchar();
    return 0;
};
