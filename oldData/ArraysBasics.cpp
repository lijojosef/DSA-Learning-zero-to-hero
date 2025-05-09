#include<iostream>
using namespace std;

int main()
{
    // for stack arrays
    int array1[8];
    for(int index = 0; index < 8; index ++){
        array1[index] = index + 1;
    }

    cout<<array1[4]<<endl;

    // for heap arrays
    int *array2 = new int[8];
    for(int index = 0; index < 8; index ++){
        *(array2 + index) = index + 1;
    }

    cout<<*(array2 + 1)<<endl;
    
    return 0;
}