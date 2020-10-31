#include<iostream>
using namespace std;

int front=0;
int rear=0;

bool isempty(){
	return (front==rear);
}

void enqueue(int queue[], int n, int x){
	if(rear==n){
		cout<<"OVERFLOW!";
	}
	else{
		queue[rear]=x;
		rear++;
	}
}

void dequeue(int queue[]){
	if(isempty()){
		cout<<"UNDERFLOW!";
	}
	else{
		front++;
	}
}

int size(){
	return rear-front;
}

void show(int queue[]){
	for(int i=front;i<rear;i++){
		cout<<"queue element ["<<i<<"th] "<<queue[i]<<endl;
	}
}

int main(){
	cout<<"Enter the Size of the queue : ";
	int n;
	cin>>n;
	int queue[n];
	enqueue(queue,n,1);
	enqueue(queue,n,2);
	cout<<size()<<endl;
	cout<<isempty()<<endl;
	show(queue);
	dequeue(queue);
	show(queue);
}
