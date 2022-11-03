//factorial of Number
#include<iostream>
using namespace std;
int main(){
	int num,b=1;
	cin>>num;
	for(int i=2; i<=num; i++){
		b=b*i;
	}
	cout<<b<<endl;
}