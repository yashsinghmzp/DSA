#include<iostream>
using namespace std;

int main()
{
    int i,n,a[100],ans=0;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    for(i=0;i<n;i++)
    {
        ans=ans^i;
    }
    cout<<"duplicate is"<<ans;
} 