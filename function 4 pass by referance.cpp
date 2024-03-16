#include<bits/stdc++.h>
using namespace std;
// pass by reference 
/*void himanshu(string &s){
	s[0]='A';
	cout<<s<<endl;
	s[4]='A';
	cout<<s<<endl;
}
int main()
{
	string s="brijesh";
	himanshu(s);
	cout<<s<<endl;.// yha pr original value nhi aayegi because of pass by reference jo value pass hogi agr change hui upar to change value wpas hogi
	return 0;
}
*/

void brijesh(int &n){
	cout<<n<<endl;
	n+=7;
	cout<<n<<endl;
	n-=4;
	cout<<n<<endl;
	n*=3;
	cout<<n<<endl;
}

int main ()
{
	int n=13;
	brijesh(n);
	cout<<n<<endl;//pass by reference ki wajah se value original value nhi change value aayi h
	return 0;
}
