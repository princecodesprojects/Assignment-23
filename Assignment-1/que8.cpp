#include<iostream>
using namespace std;

int main()
{
    int a,b;
     
    cout<<"Enter two number\n";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value is "<<a<<" and  "<<b;
    return 0;
}