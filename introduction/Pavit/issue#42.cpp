#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
  char st[50];
  int l,i,k=0,f=1;
  cout<<"Program to check for palindrome for an entered string in C++ "<<endl;
  cout<<"Ënter the string"<<endl;
  fgets(st,50,stdin);
  l=strlen(st);
  for(i=l-2;i>=0;i--)
{
    if(st[i]!=st[k])
    {
        f=0;
        break;
    }
    k++;
}
if(f==1)
    cout<<"It is a palindrome string"<<endl;
else
    cout<<"It is not a palindrome string"<<endl;
return 0;
}
