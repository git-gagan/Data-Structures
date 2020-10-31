//implementation of a simple Hash Table using arrays
#include<iostream>
using namespace std;

int frequency[26];

int hashfunc(char key){
	return (key-'a');
}

int main(){
	//Given a string, Calculate the frequency of occurrence of each character
	string s="abacda";
	for(int i=0;i<s.length();i++){
		int index=hashfunc(s[i]);
		frequency[index]++;
	}
	for(int i=0;i<26;i++){
		if(frequency[i]!=0){
			cout<<char(i+'a')<<" "<<frequency[i]<<endl;
	}}
}
// For collision resolution, use open addressing and chaining...
