//check palindrome
//palindrome mean entered number and its opposite number is equal.
#include<iostream>
using namespace std;
int main(){
	int num,reverse=0;
	cout<<"Enter number : "; 
	cin>>num;
	int b=num;
	while(num!=0){
		reverse=reverse*10;
		reverse=reverse+num%10;
		num=num/10;
	}
	
	if(b==reverse){
		cout<<"yes palindrome";
	}
	else{
		cout<<"Not palindrome";
	}
}