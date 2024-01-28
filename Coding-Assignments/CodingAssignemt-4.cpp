/*
    Star Pattern :

Print the following pattern 

Sample Input 1 : 3

Sample Output 1 :

  *
 ***
*****

Sample Input 2 : 4 

Sample Output 2 :
   *
  ***
 *****
*******

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int space = n - row;
        while(space){
            cout<<" ";
            space--;
        }

        int col = 1;
        while(col <= row){
            cout<<"*";
            col++;
        }
        
        int nextCol = 2;
        while(nextCol <= row){
            cout<<"*";
            nextCol++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}