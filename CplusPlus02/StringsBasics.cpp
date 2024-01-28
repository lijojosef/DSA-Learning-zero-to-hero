#include<iostream>
using namespace std;

int main()
{
    const char* str = "Sunny";
    cout<<str<<endl;

    // will not work, because of const
    // str[2] = 'h';   

    char str_arr[5] = {'S', 'u', 'n', 'n', 'y'};
    // char str_arr[6] = {'S', 'u', 'n', 'n', 'y', '0'};
    cout<<str_arr<<endl;


    string apnaName = "Sunny";
    cout<<apnaName<<endl;

    bool contains = apnaName.find("ny") != string::npos;
    // 3 != -1;
    cout<<contains<<endl;

    
    return 0;
}