#include<iostream>
using namespace std;

int main()
{
    int i,n,a[100],start,end,search;
    cout<<"enter the size of  array";
    cin>>n;
    cout<<"enter the element of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter element you want to search";
    cin>>search;
    start=0;
    end=n-1;
    int mid=start+((end-start)/2);
    while(start<=end)
    {
        if(a[mid]==search)
        {
             cout<<"found at index"<<" "<<mid;
             break;
        }
        if(a[mid]<search)
        {
             start=mid+1;
        }
        if(a[mid]>search)
        {
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return -1;



}
