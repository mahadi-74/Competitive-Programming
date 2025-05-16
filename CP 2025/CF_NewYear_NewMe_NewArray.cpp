#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        int maxSum= n*p;
        int minSum= -n*p;
        if(maxSum<k || minSum>k)
        {
            cout<<-1<<endl;
        }
        else
        {
            int req_change=abs(k);

            int min_req=(req_change+p-1)/p;

            cout<<min_req<<endl;

        }
    }
}
