#include<iostream>
using namespace std;
int main()
{
    int v;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>v;
            if(v==1)
            cout<<abs(i-3)+abs(j-3)<<endl;
        }
    }
    return 0;
}
