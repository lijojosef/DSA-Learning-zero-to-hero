#include<iostream>
using namespace std;

class Entity{
    // private:
    // protected: 
    public:
    int X, Y;
    Entity(){
        X = 0;
    }

    void changeValue(int newNumber){
        X = newNumber;
    }
};

class Player : public Entity{
    public:
    Player(){
        // if private in parent class, then not accessible
        // if protected, public then can be accessed
        X = 2;
    }
};

int main()
{
    Entity e;

    // if private, protected in parent class, then not accessible
    // if public then can be accessed
    

    e.changeValue(5);
    return 0;
}