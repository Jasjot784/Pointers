#include<iostream>
using namespace std;
int main()
{
  int a[]={10,20,30,40,50,60};
  int *p;
  p=&a[2];
  p--;
  for(int i=1;i<=5;i++)
  {
    if(i%2==0)
    {
      *p=*p+1;
    }
      else
      *p=*p-2;
      p++;
    }
    p--;
    for(int i=1;i<=6;i++)
    {
      cout<<*p<<endl;
      p--;
    }
  }
