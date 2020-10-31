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

