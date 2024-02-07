/*
Code : Array Sum
Given an array of length N, you need to find and print the sum of all 
elements of the array. 

Constraints : 1 <= N <= 10^6

Input Format : 
Line 1 : An Integer N i.e. size of array 
Line 2 : N integers which are elements of the array, separated by spaces

Sample Input : 
3
9 8 9

Sample Output : 26
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    int i = 0;
    while(i < n){
        sum += arr[i];
        i++;
    }

    cout<<sum<<endl;

    return 0;
}