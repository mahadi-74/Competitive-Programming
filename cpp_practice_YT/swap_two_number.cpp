#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cin>>a>>b;
    cout<<"Before swapping: \n"<<"a= "<<a<<"\n"<<"b= "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping: \n"<<"a= "<<a<<"\n"<<"b= "<<b<<endl;
    return 0;

}
