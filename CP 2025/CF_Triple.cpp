#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int result=-1;
    unordered_map<int,int>f;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        f[x]++;
        if(f[x]==3)
        {
            result=x;
        }
    }
    cout<<result<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {

        solve();
    }
    return 0;
}
