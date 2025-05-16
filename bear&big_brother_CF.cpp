#include<iostream>
using namespace std;
int main()
{
    int limak, bob,i;
    cin>>limak>>bob;
    for(i=1;;i++)
    {
        limak*=3;
        bob*=2;
        if(limak>bob)
        break;
    }
    cout<<i;
}
