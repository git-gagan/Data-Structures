/*
Our friend Monk has been made teacher for the day today by his school professors .
He is going to teach informatics to his colleagues as that is his favorite subject . Before entering the class, Monk realized that he does not remember the names of all his colleagues clearly . He thinks this will cause problems and will not allow him to teach the class well. However, Monk remembers the roll number of all his colleagues very well . Monk now wants you to help him out. He will initially give you a list indicating the name and roll number of all his colleagues.
When he enters the class he will give you the roll number of any of his colleagues belonging to the class.
You need to revert to him with the name of that colleague.
*/

#include<iostream>
#include<string>
using namespace std;

int hashfunction(int roll,int n){
	int index=roll%n;
	return index;
}

int main(){
	int n;
	cin>>n;
	int roll;
	string name;
	string hashtable[n];
	for(int i=0;i<n;i++){
		cin>>roll>>name;
		int index=hashfunction(roll,n);
		hashtable[index]=name;
	}
	int q;
	cin>>q;
	int x;
	for(int i=0;i<q;i++){
		cin>>x;
		cout<<hashtable[x%n];
	}
	return 0;
}

