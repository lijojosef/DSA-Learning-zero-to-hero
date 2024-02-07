#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main() {
	// your code goes here
    queue<string> basket;
    basket.push("Fruits");
    basket.push("Drinks");
    basket.push("Biscuits");
    
    cout<<basket.front()<<endl;
    
    while(!basket.empty())
    {
        cout<<basket.front()<<endl;
        basket.pop();
    }
}
