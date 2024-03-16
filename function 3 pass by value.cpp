#include<bits/stdc++.h>
// Pass by value=value pass hogi but original value same hi rahegi 
using namespace std;
// Normally pass by value
/*void kuchbhi( int n){
	cout<<n<<endl;
	n+=6;
	cout<<n<<endl;
	n+=8;
	cout<<n<<endl;
}
int main()
{
	int n=17;
	kuchbhi(n);
	cout<<n<<endl;
	
	return 0;
}
*/

// string me pass by value
void himanshu(string s){
	s[0]='A';
	cout<<s<<endl;
	s[4]='A';
	cout<<s<<endl;
}
int main()
{
	string s="brijesh";
	himanshu(s);
	cout<<s<<endl;
	return 0;
}