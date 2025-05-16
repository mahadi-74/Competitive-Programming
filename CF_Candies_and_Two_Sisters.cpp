#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            int res=(n/2)-1;
            cout<<res<<endl;
        }
        else
        {
            n=n-1;
            int res=n/2;
            cout<<res<<endl;
        }
    }
    return 0;
}
