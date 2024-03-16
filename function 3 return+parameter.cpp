#include<bits/stdc++.h>
using namespace std;
// Return + parameter
int sum(int num1,int num2){//void sum(int num1, int num2)
	int num3=num1+num2;
	return num3;//cout<<num3;
}
int main(){
	int num1,num2;
	cout<<"Enter the number: ";
	cin>>num1>>num2;
	int rest=sum(num1,num2);
	cout<<rest;
	return 0;
}