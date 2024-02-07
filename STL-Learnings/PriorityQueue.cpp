#include<queue>
#include<iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
    // priority_queue<int> candies;
    priority_queue<int, vector<int>, greater<int> > candies;
    candies.push(100);
    candies.push(50);
    candies.push(90);
    candies.push(20);
    candies.push(30);
    
    cout<<candies.top()<<endl;
    
    while(!candies.empty())
    {
        cout<<candies.top()<<endl;
        candies.pop();
    }
}
