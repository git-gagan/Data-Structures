#include<iostream>
using namespace std;

struct node{
	int data;									// structure for each node of list
	node *p;
};

class LinkedList{
	node *head,*tail;
	public:
		LinkedList(){							//empty LinkedList used for overall structure
			head=NULL;
			tail=NULL;
		}
		//Function Declaration
		void addnode(int x);
		void show();
};
//Function Definitions
void LinkedList::addnode(int x){
	node *temp=new node;
	temp->data=x;
	temp->p=NULL;
	if(head==NULL){				//linkedList is empty therefore temp is both head and tail now
		head=temp;
		tail=temp;
	}
	else{
		tail->p=temp;
		tail=temp;
	}	
}

void LinkedList::show(){
	if(head==NULL && tail==NULL) cout<<"Empty!"<<endl;
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->p;
	}
}

int main(){
	LinkedList l;
	cout<<"Welcome to Linkedlist creation\n";
	while(1){
		int choice;
		cout<<"To add a node press 1,\nTo view your list press 2\n";
		cin>>choice;
		if(!cin>>choice) break;
			switch(choice){
				case 1:
					int data;
					cout<<"Enter the data to be added: ";
					cin>>data;
					l.addnode(data);
					break;
				case 2:
					l.show();
					break;
				default:
					cout<<"Plz enter valid choice..!"<<endl;
			}
		}
}





















