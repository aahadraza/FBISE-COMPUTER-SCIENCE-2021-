#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	int a,b,c,d;
	int base;
	int height;
	int sum1;
	int sum2;
	int product;
	int average;
	int area;	
	cin>>x;
	cout<<"enter the value of x:"<<x<<endl;
	cin>>y;
	cout<<"enter the value of y:"<<y<<endl;
	cin>>z;
	cout<<"enter the value of z:"<<z<<endl;
	cin>>a;
	cout<<"enter the value of a:"<<a<<endl;
	cin>>b;
	cout<<"enter the value of b:"<<b<<endl;
	cin>>c;
	cout<<"enter the value of c:"<<c<<endl;
	cin>>d;
	cout<<"enter the value of d:"<<d<<endl;
	cin>>base;
	cout<<"enter the value of base:"<<base<<endl;
	cin>>height;
	cout<<"enter the value of height:"<<height<<endl;
	sum1=x+y+z;
	sum2=a+b+c+d;
	product=a*b*c*d;
	average=a+b+c+d/4;
	area=0.5*base*height;
	cout<<"the sum of three number sum:"<<sum1<<endl;
	cout<<"the sum of four number sum:"<<sum2<<endl;
	cout<<"the product of four number product:"<<product<<endl;
	cout<<"the average of four average:"<<average<<endl;
	cout<<"the area of a traingle:"<<area<<endl;
	return(0);
}
