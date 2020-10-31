/*
Micro just purchased a queue and wants to perform N operations on the queue. The operations are of following type:

E x: Enqueue x in the queue and print the new size of the queue.
D: Dequeue from the queue and print the element that is deleted and the new size of the queue separated by space.
If there is no element in the queue then print 1 in place of deleted element.

For each enqueue operation print the new size of the queue.
And for each dequeue operation print two integers, deleted element (1, if queue is empty) and the new size of the queue.
*/

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
