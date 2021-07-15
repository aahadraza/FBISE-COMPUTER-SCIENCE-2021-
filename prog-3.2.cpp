#include<iostream>
using namespace std;
int main()
{
	double a;
	double b;
	int reminder;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";                     
	cin>>b;
	reminder=(int)a % (int)b;
	cout<<"the reminder of two value:"<<reminder<<endl;
	return(0);
}
//explicit function does not work on a float when we use a modulus
