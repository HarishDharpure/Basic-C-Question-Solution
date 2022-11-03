//find armstrong value of the given number
#include<iostream>
using namespace std;
int main(){
	int a,count=0,sum=0;
	cout<<"Enter Number : ";
	cin>>a;
	int b=a;
	while(a!=0){
		count=count+1;
		a=a/10;
	}
	cout<<"total size : "<<count;
	while(b!=0){
		sum+=(b%10)*count;
		b=b/10;
	}
	cout<<"Armstrong value of the given Number is "<<sum;
	
}