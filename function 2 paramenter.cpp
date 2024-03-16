#include<bits/stdc++.h>
using namespace std;
// void + parameter wala code
// Functions are a set(block) of code which perfoms some oprerations for you
// Functions are used to modularise code 
// functios are used to increase readability 
void name(string bayes){//bayes me str ki value aa jayegi,,,,,,bayes ki jagah str variable bhi rakh sakte hai 
	cout<<bayes<<endl;
}
int main(){
	string str;
	cout<<"Enter the Name: ";
	cin>>str;
	name(str);//str me jo value rahegi wo upar void name(string bayes) me copy ho jayegi chache variable name diff kyu hi na ho 
	string str1;
	cout<<"Enter the Name: ";
	cin>>str1;
	name(str1);
	return 0;
}