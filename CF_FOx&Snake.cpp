#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int r=1; r<=n; r++)
    {
        if(r%2==1)
        {
            cout<<string(m,'#')<<endl;
        }
        else
        {
            if(r%4==2)
            {
                cout<<string(m-1,'.')<<'#'<<endl;
            }
            else
            {
                cout<<'#'<<string(m-1,'.')<<endl;
            }
        }
    }
    return 0;
}
