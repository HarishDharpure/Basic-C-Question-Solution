#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"a ="<<a<<endl;
	cout<<" b= "<<b<<endl;
	//logic
	int temp;
	temp=a;
	a=b;
	b=temp;
	//
	cout<<" a =" <<a<<endl;
	cout<<"b= "<<b<<endl;
}