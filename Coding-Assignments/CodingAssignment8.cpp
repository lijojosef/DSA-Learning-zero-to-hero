/*
    Check  Fibonacci Number 

Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.

Fibonacci Series is defined by the recurrence : F(n) = F(n-1) + F(n-2) 
where F(0) = 0 and F(1) = 1,  F(3) = 1+1=2, F(4) = 1+2=3, F(5) = 2+3=5, ....


Constraints :
0 <= n <= 10^4

Sample Input 1 : 5

Sample Output 1 : true

Sample Input 2 : 14

Sample Output 2 : false
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int prev = 1;
    int curr = 1;

    int i = 3;
    int count = 0;
    while(i <= n){
        int next = prev + curr;
        prev = curr;
        curr = next;
        i++;
        if(curr == n){
            count++;
        }
        // cout<<curr<< " " <<count <<endl;
    }
    bool check = count > 0 ? true : false;
    cout<<check<<endl;
    return 0;
}