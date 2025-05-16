#include<iostream>
using namespace std;
int main()
{
    int a,sum_x=0,sum_y=0,sum_z=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if(sum_x==0 && sum_y==0 && sum_z==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}
