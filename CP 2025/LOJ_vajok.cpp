#include<iostream>
using namespace std;
int main()
{
    int T,a;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a;
        cout<<"case "<<i<<": ";
        for(int j=1;j<=a;j++)
        {
            if(a%j==0)
            {
                cout<<j<<" ";
            }
        }
    }
    return 0;
}
