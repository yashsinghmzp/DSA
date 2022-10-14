#include<iostream>
using namespace std;

int main()
{
    int i,n,a[100],ans=-1,start,end,key;
    cout<<"enter the size of  array";
    cin>>n;
    cout<<"enter the element of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter your key";
    cin>>key;
    start=0;
    end=n-1;
    int mid=(start+end)/2;
    
    while(start<=end)
    {
        if(a[mid]==key)
        {
            ans=mid;
            end=mid-1;//for last occurence start=mid+1
        }
        else if(key>a[mid])
        {
            start=mid+1;
        }
        else if(key<a[mid])
        {
            end=mid-1;

        }
        mid=(start+end)/2;
    }
   cout<<ans;


}