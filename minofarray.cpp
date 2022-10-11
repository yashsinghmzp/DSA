#include<iostream>
using namespace std;

int main()
{
    int i,n,a[100],max;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<max)
        {
                max=a[i];
        }
    }
    cout<<max;

}