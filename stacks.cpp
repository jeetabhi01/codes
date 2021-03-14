#include<bits/stdc++.h>

#define MAX 3;
class stack{
 private:
	int top;
 public:
		stack(){
		top=-1;
		}
	int stk[MAX];
	bool isempty();
	bool isfull();
	void push(int &x);
	int pop();
	int peek();
};

stack::bool isempty(){
  return(top<0);
	}

stack::bool isfull(){
  return(top>=MAX-1);
	}			
stack::void push(int &x){
  if(top>=MAX){
		cout<<"Stack Overflow \n";
		else{
			stk[++top]=x;
			cout<<"Element"<<x<<" pushed into the stack \n";
	}
  }
