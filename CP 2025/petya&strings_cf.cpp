#include<iostream>
using namespace std;
int main()
{
    string a,b,letter_1,letter_2;
    cin>>a>>b;
    for(int i=0; i<a.size();i++)
    {
       letter_1= toupper(a[i]);
       letter_2= toupper(b[i]);

        if(letter_1==letter_2)
        {
            continue;
        }
        else if(letter_1<letter_2)
        {
            cout<<-1<<endl;
            break;
        }
        else
        {
            cout<<1<<endl;
            break;
        }

    }
    if(letter_1==letter_2)
    {
        cout<<0<<endl;
    }

    return 0;
}
