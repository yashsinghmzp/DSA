#include <iostream>
using namespace std;

int main()
{
    int i, start, end, n, a[100];
    cout << "enter the size of array";
    cin >> n;
    cout << "enter the element of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            int temp;
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
    }
    
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}