#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int digit= x[0]- '0';
        int len= x.size();
        int total= 10*(digit-1)+(len*(len+1))/2;
        cout<<total<<endl;

    }
    return 0;
}
