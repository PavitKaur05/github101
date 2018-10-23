#include <iostream>

using namespace std;

int main()
{
    int num , fact , i;
    fact = 1;
    cout<<"Program to calculate factorial of a number"<<endl;
    cout<<"Enter the no"<<endl;
    cin>>num;//statement to get value from user
    for(i = 1;i <= num; i++)
         fact = fact * i;
    cout<<"The factorial of number = "<<fact<<endl;
    return 0;
}
