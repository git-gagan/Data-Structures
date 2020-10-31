#include<iostream>
using namespace std;

int front=0;
int rear=0;

void enqueue(int queue[],int element){
		queue[rear]=element;
		rear++;
		cout<<rear-front;
}
void dequeue(int queue[]){
	if(front==rear){
		cout<<"-1 "<<rear-front;
	}
	else{
		int deleted=queue[front];
		front++;
		cout<<deleted<<" "<<rear-front;
	}
}

int main(){
	int n;
	cin>>n;
	char input;
	int element;
	int queue[100];
	for(int i=0;i<n;i++){
		cin>>input;
		if(input=='E'){
			cin>>element;
			enqueue(queue,element);
			cout<<endl;
		}
		else if(input=='D'){
			dequeue(queue);
			cout<<endl;
		}
	}
}
