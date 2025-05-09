#include<iostream>
using namespace std;

int main()
{
    const int MAX_AGE = 90;
    // this is not possible. const means we cannot change it.
    // MAX_AGE = 80;

    // int* a = new int;
    
    // if I use the below one then I cannot modify *a, but I manipulate a
    // const int* a = new int;
    // // *a = 2;
    // a = (int*) &MAX_AGE;
    
    // if I am using const like this in both the places then I am not able to modify both
    const int* const a = new int;
    // *a = 2;
    // a = (int*) &MAX_AGE;


    
    cout<<a<<endl;
    cout<<*a<<endl;

    
    return 0;
}