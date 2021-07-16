#include<iostream>
using namespace std;
int main()
{
	int marks;
	int totalmarks;
	double percentage;
	cout<<"enter your marks:";
	cin>>marks;
	cout<<"enter your total marks:";
	cin>>totalmarks;
	percentage=marks*100/totalmarks;
	cout<<"your percentage is:"<<percentage<<endl;
	return(0);
}
