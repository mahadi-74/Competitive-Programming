#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int current_passengers=0;
    int max_capacity=0;
    while(n--)
    {
        cin>>a>>b;
        current_passengers -=a;
        current_passengers +=b;

        if(current_passengers>max_capacity)
        {
            max_capacity=current_passengers;
        }


    }
    cout<<max_capacity<<endl;
    return 0;
}
