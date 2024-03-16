#include<bits/stdc++.h>
using namespace std;
/* Write a program for school grading system
a.below 25 - F
b.25 to 44 - E
c.45 to 59 - D
d.60 to 70 - c 
e.71 to 85 - B
f.86 to 100 -A
ask user to enter the marks for printing his grading system
*/

/* first way to implement this but its a wrong way because of all the if candition executed 
int main()
{
	int marks;
	cout<<"Enter the Marks: ";
	cin>>marks;
/*	if(marks<25){
		cout<<"F";
		}
    if(marks>=25 && marks<=44){
    	cout<<"E";
	}
	if(marks>=45 && marks<=59){
		cout<<"D";
	}
	if(marks>=60 && marks<=70){
		cout<<"C";
	}
	if(marks>=71 && marks<=85){
		cout<<"B";
	}
	if(marks>=86 && marks<=100){
		cout<<"A";
	}
	return 0;	
}
*/
// Second way to implement ("Else if")
int main()
{
	int marks;
	cout<<"Enter the Marks: ";
	cin>>marks;
	if(marks<25){
		cout<<"F";
		}
    else if(marks<=44){
    	cout<<"E";
	}
	else if(marks<=59){
		cout<<"D";
	}
	else if(marks<=70){
		cout<<"C";
	}
	else if(marks<=85){
		cout<<"B";
	}
	else if(marks<=100){
		cout<<"A";
	}
	return 0;	
}
