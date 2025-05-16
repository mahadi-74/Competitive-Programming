#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long sum=a+b+c;
        if(sum%3!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long need=sum/3;
        if(need<a || need<b)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
