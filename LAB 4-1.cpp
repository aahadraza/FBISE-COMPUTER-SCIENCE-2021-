#include<iostream>
using namespace std;
int main()
{
	float celsius;
	float fahrenheit;
	cout<<"enter the value of celsius:";
	cin>>celsius;
	//cout<<"enter the value of fahrenheit";
	//cin>>fahrenheit;
	//celsius = 0.555*(fahrenheit-32);
	fahrenheit = (celsius*5/9)+32;
	//cout<<"CELSIUS TO FAHRENHEIT IS:"<<celsius<<endl;
	cout<<"FAHRENHEIT TO CELSIUS IS:"<<fahrenheit<<endl;
	return(0);
}
