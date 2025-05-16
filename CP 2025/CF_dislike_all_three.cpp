#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        int count=0,num=0;
        while(count<k)
        {
            num++;
            if(num%10!=3 && num%3!=0)//last digit jodi 3 na pai & num ti 3 dara vag jodi na jay
            {
                count++;

            }
        }
        cout<<num<<endl;
    }
    return 0;
}
