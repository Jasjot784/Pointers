#include<iostream>
using namespace std;
void swap(int *,int*);
int main()
{
  int a,b;
  cout<<"enter 2 numbers"<<endl;
  cin>>a>>b;
  cout<<"values before swapping is "<<a<<" "<<b<<endl;
  swap(&a,&b);
}
void swap(int *a,int *b)
{
  int swap;
  swap=*a;
  *a=*b;
  *b=swap;
  cout<<"values after swapping is "<<*a<<" "<<*b<<endl;
}
