// This is all about how to use stacks in c++

#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> myStack;
	myStack.push(34);
	myStack.push(3);
	myStack.push(4);
	myStack.push(33);
	myStack.push(30);
    myStack.push(340);	
	
	//print the element at the top of the stack 
	cout<<"The first element at the top is "<<myStack.top()<< endl;
	//print all values of the stack 
	if(myStack.empty()){
		cout<<"The stack is empty please"<<endl;
	}else{
		cout<<"The stack is not empty please"<<endl;
	};
	
	while(!myStack.empty()){
		cout<<myStack.top()<<endl;
		myStack.pop();
	}			

}

