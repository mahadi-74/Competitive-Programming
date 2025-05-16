#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,x=0;
    cin>>i;
    string s;
    while(i--)
    {
        cin>>s;
        if(s[1] =='+')
        {
            x++;
        }
        else
        {
           x--;
        }

    }
    cout<<x<<endl;
    return 0;
}
