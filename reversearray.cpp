#include<iostream>
using namespace std;

int main()
{
    int i,start,end,n,a[100];
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    start=0;
    end=n-1;
    while(start<=end)
    {
        int temp;
        temp=a[end];
        a[end]=a[start];
        a[start]=temp;
        start++;
        end--;

       
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}