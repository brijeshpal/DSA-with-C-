#include<bits/stdc++.h>
using namespace std;
/* 
Take the name from user then decide accordingly
1. If age <18
    print -> "not eligible for the job"
    
2. If age >= 18 and <=54 
   print-> "eligible for the job"
3. if age >=55 and <=57,
    print-> "eligible for the job but, retirement soon" 
4. If age >57 
   print->"retirement time"
*/
int main (){
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	if(age<18){
		cout<<"not eligible for the job";
	}
	else if(age>=18 && age<=57){
		cout<<"eligible for the job ";
	//	if(age>54 && age<=57){ 
	//		cout<<"but retirement soon";
	//	}
		if(age<=57){
		cout<<"but retirement soon";
		}
	}
	else{
		cout<<"retirement time";
	}
	return 0;
}       
	
	 	  