#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>unique_val;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            unique_val.insert(a);

        }

        if(unique_val.size()==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        //cout<<unique_val.size()<<endl;
    }
    return 0;
}
