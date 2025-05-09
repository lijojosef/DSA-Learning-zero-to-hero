/*
    Print the following pattern : 

(Pattern for N = 4) 

1
2 3
3 4 5
4 5 6 7

-Sample Input 1 : 3

-Sample Output 1 : 

1
2 3
3 4 5
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int start = i;
        while(j <= i){
            cout<<start<<" ";
            j++; start++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}