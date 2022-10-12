#include<iostream>
using namespace std;

int main()
{
    int i,j,n1,n2,a[100],b[100],ans=0;
    cout<<"enter the size of first array";
    cin>>n1;
    cout<<"enter the element of array";
    for(i=0;i<n1;i++)
    {
        cin>>a[i];

    }
    cout<<"enter the size of second array";
    cin>>n2;
    cout<<"enter the element of second array";
    for(j=0;j<n2;j++)
    {
        cin>>b[j];
    }
     for(i=0;i<n1;i++)
     {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
               cout<<"intersection is"<<a[i]<<endl;
            }
            

        }
     }
     

}