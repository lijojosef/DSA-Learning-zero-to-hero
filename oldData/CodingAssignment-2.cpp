/*
    Sum of Even Numbers till N: 

Given a number N, print sum of all even numbers from 1 to N.  

- Sample Input 1 : 6

- Sample Output 1 : 12

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 2, sum = 0;
    while(i <= n){
        sum += i;
        i+=2;
    }
    cout<<sum;
    return 0;
}