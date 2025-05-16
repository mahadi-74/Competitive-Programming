#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string sorted= s;
        sort(sorted.begin(), sorted.end());
        if(sorted[0]== sorted.back())
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(sorted != s)
            {
                cout<<sorted<<endl;
            }
            else{
                reverse(sorted.begin(), sorted.end());
                cout<<sorted<<endl;
            }
        }
    }
    return 0;
}
