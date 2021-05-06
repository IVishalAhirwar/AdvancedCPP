//Copyright©2021 Vishal Ahirwar.All rights reserved.
#include<iostream>
#include<cstring>


class vString
{
    private:
    char* Buffer;
    public:
    vString();
    vString(const char*InitString);
    vString(const vString& vstr);
    vString(vString&& Source);
    ~vString();
    public:
    char*GetString()const;
};
vString::vString(vString&& Source)
{
    Buffer=NULL;
    if(Source.Buffer!=NULL)
    {
        Buffer=Source.Buffer;
        Source.Buffer=NULL;
    };
};


vString::vString(const vString& vstr)
{
    std::cout<<"\nCopy Constructor: Copying Data from vString...\n";
    Buffer=NULL;
    if(vstr.Buffer!=NULL)
    {
        Buffer=new char[strlen(vstr.Buffer)];
        strcpy(Buffer,vstr.Buffer);
    };

};

vString::~vString()
{
    std::cerr<<"\nCleaning, Up Memory!";
    delete[]Buffer;
};

vString::vString()
{
    std::cerr<<"vString Normal Constructor Called!.";
};

vString::vString(const char* InitString)
{
    std::cout<<"\nConstructor Called!";
    Buffer=NULL;
    Buffer= new char[strlen(InitString)];
    strcpy(Buffer,InitString);
};

char* vString::GetString()const
{
    return Buffer;
};

void Use_vString(vString vstr)
{
    std::cerr<<"\nvString Contains:  ";
    std::cout<<"\n"<<vstr.GetString();
    return;
};

vString Copy(vString vCString)
{
    vString ReturnVString(vCString.GetString());
    return ReturnVString;
};

int main()
{
    vString vstr("\nvString reporting here...");
    //std::cout<<"\nvString Says: "<<vstr.GetString();
    Use_vString(Copy(vstr));
    //vstr("new vstring instance calling...");
    Use_vString(vstr);
    getchar();
    return 0;

};
