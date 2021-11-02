#include<iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int num3;
	cout<<"enter the value of num1:";
	cin>>num1;
	cout<<"enter the value of num2:";
	cin>>num2;
	cout<<"enter the value of num3:";
	cin>>num3;
	if((num1>num2)&&(num1>num3))
	{
		cout<<"num1 is the largest once:"<<num1<<endl;
	}
	 else if((num2>num1)&&(num2>num3))
	{
		cout<<"num2 is the largest once:"<<num2<<endl;
	}
	else
	{
		cout<<"num3 is the largest once:"<<num3<<endl;
	}
	
}
