#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	// your code goes here
	std::stack<string> libraries;
	libraries.push("Physics");
	libraries.push("Chemistry");
	libraries.push("Computer Science");
	libraries.push("Mathematics");
	
	while(!libraries.empty())
	{
	    cout<<libraries.top()<<endl;
	    libraries.pop();
	}
}
