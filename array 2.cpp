#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[5],b;
	cout<<"Enter the Array: ";
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
	arr[0]+=15;//for addition
	arr[1]-=10;
	arr[2]*=6;
	arr[3]/=3;
	arr[4]%=6;
	b=arr[2]+arr[3];
	cout<<"The New Array is: "<<arr[0]<<"\n"<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl<<arr[4]<<endl<<"sum of two array is: "<<b<<endl;
	return 0;
}