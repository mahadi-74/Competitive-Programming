#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        int total_min= h*60+m;
        int remaining_min=(24*60)-total_min;
        cout<<remaining_min<<endl;
    }
    return 0;
}
