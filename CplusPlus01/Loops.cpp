#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // for loops usuage
    for(int i = 0; i < n; i++){
        cout<<i<<" ";
    }
    cout<<endl<<"=============="<<endl;

    // while loop with the same code
    int i = 0;
    while (i < n){
        cout<<i<<" ";
        i++;
    }
    cout<<endl<<"=============="<<endl;
    
    // do while loop with the same example
    int j = 0;
    do{
        cout<<j<<" ";
        j++;
    }while(j < n);
    
    return 0;
}