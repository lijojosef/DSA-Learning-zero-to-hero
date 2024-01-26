#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool comparisonResult = n == 1;
    
    if(comparisonResult == 1){
        cout<<"is equal to 1"<<endl;
    }else{
        cout<<"is not equal to 1"<<endl;
    }
    cin.get();

    return 0;
}