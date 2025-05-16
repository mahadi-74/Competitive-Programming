#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    int pos[3]={x,y,z};
    sort(pos,pos+3);

    int total_distance=abs(pos[1]-pos[0])+abs(pos[1]-pos[2]);
    cout<<total_distance<<endl;

    return 0;
}
