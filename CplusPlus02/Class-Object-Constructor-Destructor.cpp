#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    bool Gender;

    void toString(){
        cout <<"Name: " << name << " rollNo: " << rollNo << " Gender: " << Gender << endl;
    }

    void setNewName(string s){
        name = s;
    }
    
    // Default constructor
    Student(){
        cout<<"Default constructor"<<endl;
    }
    // parameterised constructor
    Student(string name, int rollNo, bool Gender){
        this->name = name;
        this->rollNo = rollNo;
        this->Gender = Gender;
    }
    // copy constructor
    Student(Student &B){
        name = B.name;
        rollNo = B.rollNo;
        Gender = B.Gender;
        cout<<"Copy constructor"<<endl;
    }
    // Destructor
    ~Student(){
        cout<<"Destructor"<<endl;
    }
    
};

int main()
{
    Student A;
    A.name = "Lijo";
    A.rollNo = 12;
    A.Gender = true;

    A.toString();

    A.setNewName("Joseph");
    A.toString();
    
    Student B("Max", 13, false);
    B.toString();
    
    Student C = B;
    C.toString();
    
    return 0;
}