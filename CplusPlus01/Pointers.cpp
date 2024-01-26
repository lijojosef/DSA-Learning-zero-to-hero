#include<iostream>
using namespace std;

int main()
{
    int number = 9;
    // pointer
    int *ptr = &number;

    cout<<ptr<<endl;

    // reference
    int &ref = number;

    // shallow copy
    ref++;
    cout<<ref<<endl;
    
    cout<<number<<endl;
    
    return 0;
}