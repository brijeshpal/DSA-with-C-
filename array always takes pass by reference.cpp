#include<bits/stdc++.h>
using namespace std;
// array always takes pass by reference
void kuchbhi(int arr[],int n){
	arr[0]+=10;
	cout<<"value inside function "<<arr[0]<<endl;
}
int main ()
{
	int n=5;
	int arr[n];
	cout<<"Enter the array: ";
	for (int i=0;i<n;i=i+1){
		cin>>arr[i];
	}
	kuchbhi(arr,n);
	cout<<"value inside int main "<<arr[0]<<endl;
	return 0;
}