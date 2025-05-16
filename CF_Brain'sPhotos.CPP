#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;

    bool color= false;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            char c;
            cin>>c;

            if(c=='C'||c=='M'||c=='Y')
            {
                color=true;
            }
        }

    }

    if(color)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
