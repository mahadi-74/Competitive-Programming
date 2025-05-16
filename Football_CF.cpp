#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0,y=0,z=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            x++;
            y=0;
        }
        else
        {
            y++;
            x=0;
        }
        if(x==7||y==7)
        {
            z=1;
        }
    }
    if(z==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
