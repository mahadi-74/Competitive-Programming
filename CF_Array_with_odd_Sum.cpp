#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        int total=0;
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;

            if(a%2!=0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if(even>0 && odd>0)
        {
            cout<<"YES"<<endl;
        }
        else if(odd%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
