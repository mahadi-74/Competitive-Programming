#include<iostream>
#include<vector>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int even_count=0, odd_count=0;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    if(odd_count%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
