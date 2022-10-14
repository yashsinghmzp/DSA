#include<iostream>
using namespace std;
int main()
{
      int n,i,sum=0,a;
      cout<<"enter the number";
      cin>>n;
      int n1=n;
      while(n>0)
      {
        a=n%10;
        sum=sum*10+a;
        n=n/10;
      }
      if(n1==sum)
      {
        cout<<"palindrome";
      }
      else{
        cout<<"not palindrome";
      }
}