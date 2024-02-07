#include<iostream>
#include<array>
#include<algorithm>
using namespace std;


void printArray(array <int, 15> arr){
        for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main()
{
    array<int, 5> arr = {1, 2, 4, 5, 6};

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    // printArray(arr);

    arr[0] = 5;

    // for(auto num : arr){
    //     cout<<num << " ";
    // }cout<<endl;

    

    sort(arr.begin(), arr.end());   
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    // printArray(arr);
    // classic array
    // sort(arr, arr + n); 

    // for(auto num : arr){
    //     cout<<num << " ";
    // }cout<<endl;
    // printArray(arr);

    array<int, 15> practiceArray;
    practiceArray.fill(2);
    printArray(practiceArray);

    cout<<arr.at(4)<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    
}
