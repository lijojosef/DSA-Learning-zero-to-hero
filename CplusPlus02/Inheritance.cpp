#include<iostream>
using namespace std;

class ParentClass{

    public:
    float X, Y;
    void bringYourChild(float xa, float ya){
        X += xa;
        Y += ya;
    }
};

class ChildClass : public ParentClass{
    public:
    const char* name;
    void printChildName(){
        cout<<name<<endl;
    }
    void printSchoolCoordinate(){
        cout<<X<<endl;
        cout<<Y<<endl;
    }
};

int main()
{
    ChildClass a;
    a.X = 10;
    a.Y = 15;
    a.bringYourChild(10.5, 15.5);
    a.printSchoolCoordinate();
    a.name = "Boby";
    a.printChildName();
    cout<<sizeof(ParentClass)<<endl;
    cout<<sizeof(ChildClass)<<endl;


    return 0;
}