#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n==1||n==2)
        {
            cout<<1<<endl;
        }
        else
        {
            n-=2;
            int floor=(n+x-1)/x;
            cout<<floor+1<<endl;
        }
    }
    return 0 ;
}
