#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    int result;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        result=a%b;
        if(result==0)
        {
           cout<<result <<endl;
        }
        else
        {
            cout<<b-result<<endl;
        }

    }

    return 0;
}
