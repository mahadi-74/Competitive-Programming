#include<iostream>
using namespace std;
int main()
{
    long long n,result;
    cin>>n;
    if(n%2==0)
    {
        result=n/2;
    }
    else{
        result=-(n+1)/2;
    }
    cout<<result<<endl;
}
