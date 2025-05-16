#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
        cin>>n;
        string s;
        cin>>s;
        set<char> unique_problems;
        for(int i=0;i<s.size();i++)
        {
            unique_problems.insert(s[i]);
        }
        int u= unique_problems.size();
        int v= s.size();
        int total_balloons = (u*2)+(v-u);
        cout<< total_balloons <<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
