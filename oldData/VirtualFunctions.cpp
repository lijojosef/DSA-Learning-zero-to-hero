#include<iostream>

using namespace std;

class Entity{
    public: 
    virtual string GetName(){
        return "Entity";
    }
};

class Player : public Entity{
    private: 
    string n_name;
    public:
    Player(const string &name){
        n_name = name;
    }

    string GetName(){
        return n_name;
    }
};

void printName(Entity *e){
    cout<<e->GetName()<<endl;
}


int main()
{
    Entity *e = new Entity();
    printName(e);
    Player *p = new Player("Sunny");
    printName(p);

    return 0;
}