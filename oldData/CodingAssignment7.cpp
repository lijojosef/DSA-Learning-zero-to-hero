/*
    WRITE CODE : Nth Fibonacci Number (using Loop)

Nth term of Fibonacci series F(n), where F(n) is a function, 
is calculated using the following formula -
F(n) = F(n-1) + F(n-2), Where, F(1) = 1, F(2) = 1, F(3) = 1+1=2, F(4) = 1+2=3, F(5) = 2+3=5, ....  
Provided N you have to find out the Nth Fibonacci Number.

Constraints:
1 <= N <= 10000 Where ‘N’ represents the number for which we have to find 
its equivalent Fibonacci number.

Time Limit: 1 second

Sample Input 1: 6

Sample Output 1: 8

Explanation : 

Now the number is ‘6’ so we have to find the “6th” Fibonacci number 
So by using the property of the Fibonacci series i.e 
[ 1, 1, 2, 3, 5, 8, 13, 21] So the “6th” element is “8” hence we get the output.

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
    while(i <= n){
        int next = prev + curr;
        prev = curr;
        curr = next;
        i++;
    }

    cout<<curr<<endl;
    
    return 0;
}