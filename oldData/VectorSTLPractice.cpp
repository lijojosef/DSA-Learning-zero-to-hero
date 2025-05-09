#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int> vec;
    // vector<int> dynArr{ 10, 20, 30 };
    
    int arr[4] = {10, 20, 30, 40};

    int n = sizeof(arr) / sizeof(arr[0]);   
 
    vector<int> vect(arr, arr + n);


    // vector<int> second(dyArr);
    vector<int> vec2(5, 0);

    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i]<<" ";
    }cout<<endl;

    // for(int num : dyArr){
    //     cout<<num<<" ";
    // }cout<<endl;

    vect.push_back(20);
    cout<<vect.size()<<endl;
    cout<<vect.capacity()<<endl;
    cout<<vect.max_size()<<endl;
    vect.pop_back();
    
    return 0;
}