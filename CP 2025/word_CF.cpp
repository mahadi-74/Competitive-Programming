#include<iostream>
#include<string>
using namespace std;
int main()
{
    int up=0,lw=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            lw++;
        }
    }
    if(up>lw)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
    if(up<lw)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    if(up==lw)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
