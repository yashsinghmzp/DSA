#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    for(i=0;i<5;i++)
    {
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
}