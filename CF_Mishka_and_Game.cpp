#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int mishka=0;
    int chris=0;
    while(t--)
    {
        int m,c;
        cin>> m>>c;

        if(m>c)
        {
            mishka++;
        }
        else if(m<c)
        {
            chris++;
        }
    }
    if(mishka>chris)
    {
        cout<<"Mishka"<<endl;
    }
    else if(chris>mishka)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }

}
