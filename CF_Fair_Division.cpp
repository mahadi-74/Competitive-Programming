#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ones=0,twos=0;
        for(int i=0;i<n;i++)
        {
            int candies;
            cin>>candies;

            if(candies==1)
            {
                ++ones;
            }
            else
            {
                ++twos;
            }
        }
        int total_wgt = ones + 2*twos;

        if(total_wgt % 2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
           int half=total_wgt/2;

           if(half%2!=0 && ones==0)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               cout<<"YES"<<endl;
           }
        }
    }
    return 0;
}
