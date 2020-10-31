#include<iostream>
using namespace std;
//Implementation of stacks..
int top=-1;

bool isempty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}

void push(int stack[],int x, int n){
	if(top==n-1){
		cout<<"STACK Overflow...!";
	}
	else{
		top+=1;
		stack[top]=x;
	}
}

void pop(){
	if(isempty()){
		cout<<"STACK Underflow...!";
	}
	else{
		top-=1;
	}
}

int size(){
	return top+1;
}

void show(int stack[]){
	for(int i=0;i<=top;i++){
		cout<<stack[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Plz enter the size of stack...";
	cin>>n;
	int stack[n];
	push(stack,7,n);
	push(stack,8,n);
	push(stack,9,n);
	cout<<size()<<endl;
	show(stack);
	pop();
	pop();
	pop();
	show(stack);
	pop();
}


