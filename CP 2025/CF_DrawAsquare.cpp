#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if(abs(l)==abs(r) && abs(r)==abs(d) && abs(d)==abs(u) && abs(l)==abs(d) && abs(l)==abs(u) && abs(r)==abs(u))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
