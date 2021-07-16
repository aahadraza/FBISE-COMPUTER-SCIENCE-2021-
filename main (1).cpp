#include<iostream>
using namespace std;
int main()
{
    //increment operator:
    int a,b,x,y;
    int c,d;
    cout<<"enter your value of c:"<<endl;
    cin>>c;
    cout<<"enter your valueo of d:"<<endl;
    cin>>d;
    d++;
    ++c;
    a=b=x=y=0;
    a++;
    b=a;
    ++x;
    y=x;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    return(0);
}