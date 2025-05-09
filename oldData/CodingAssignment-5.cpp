/*
    Sum of even & odd: 

Write a program to input an integer N and print the sum of all its even digits 
and sum of all its odd digits separately. (With a single space)
Digits mean numbers, not the places! 
That is, if the given integer is "1 3 2 4 5", even digits are 2 & 4 and 
odd digits are 1, 3 & 5. 

Constraints : 0 <= N <= 10^8

-Sample Input 1: 1234 -

-Sample Output 1: 6 4

-Sample Input 2: 552245

-Sample Output 2: 8 15
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sumEven = 0;
    int sumOdd = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 == 0){
            sumEven += digit;
        }else{
            sumOdd += digit;
        }

        n = n / 10;
    }

    cout<<sumEven << " " << sumOdd <<endl;
    
    
    return 0;
}