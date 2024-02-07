#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	// your code goes here
	deque<int> first;
	deque<int> second(4, 100);
	
	for(auto num: second){
	    cout<<num<<" ";
	}cout<<endl;
	
	deque<int> third(second.begin(), second.end());
    for(auto num: third){
	    cout<<num<<" ";
	}cout<<endl;
    
    third.push_front(6);
    for(auto num: third){
	    cout<<num<<" ";
	}cout<<endl;
	
	third.pop_front();
	third.push_back(7);
	third.pop_back();
	third.front();
	third.back();
	
    
}
