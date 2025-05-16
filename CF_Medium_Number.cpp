#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int medium=(a+b+c)-min({a,b,c})-max({a,b,c});
        cout<<medium<<endl;
    }
    return 0;
}
