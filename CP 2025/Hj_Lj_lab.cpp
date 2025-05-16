#include<iostream>
using namespace std;
int main()
{
    int arr[100],n;

    cin>>n;
    int i,High_jump=0,Low_jump=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            High_jump++;
        }
        else
        {
            Low_jump++;
        }
    }
    cout<<"High_jump: "<<High_jump<<endl;
    cout<<"Low_jump: "<<Low_jump<<endl;
    return 0;
}
