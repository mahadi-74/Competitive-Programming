#include<iostream>
using namespace std;
int main()
{
    int n,h,a,width=0;
    cin>>n>>h;
    while(n--)
    {
        cin>>a;
        if(a>h)
        {
            width +=2;
        }
        else
        {
            width +=1;
        }
    }
    cout<<width;
    return 0;
}
