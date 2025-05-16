#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    set<char>p;
    for(int i=0; i<n; i++)
    {
        p.insert(tolower(s[i]));
    }
    if(p.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
