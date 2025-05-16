#include <iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int total_cost=0;
    for(int i=1;i<=w;i++)
    {
        total_cost+=i;
    }
    int borrow=(k*total_cost)-n;
    if(borrow<0)
    {
        cout<<"0";
    }
    else
    {
      cout<<borrow;
    }

    return 0;
}
