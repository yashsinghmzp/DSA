#include <iostream>
using namespace std;

int main()
{
    int i, n, a[100], search,f=0;
    cout << "enter the size of array";
    cin >> n;
    cout << "enter the element of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the element you want to search";
    cin >> search;
    for (i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            cout << "element found" <<" "<< search;
            f=1;
            break;
            
        }
        
        
    }
    if(f==0)
    {
        cout<<"element not found";
    }
}