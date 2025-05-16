#include<bits/stdc++.h>
using namespace std;

int main()
{
    string guest,host,pile;
    cin>>guest>>host>>pile;

    string combined = guest+host;
    if(combined.length() != pile.length())
    {
        cout<<"NO"<<endl;
        return 0;
    }

    sort(combined.begin(),combined.end());
    sort(pile.begin(),pile.end());
    if(combined == pile)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
