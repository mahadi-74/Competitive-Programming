#include<iostream>
//A=65,B=66,C=67...,,Z=90
//a=97,,b=98,c=99,,,,,z=122
//&& uppercase and lowercase difference is 32...
using namespace std;
int main()
{
    string word;
    cin>>word;
    if(word[0]>=97 && word[0]<=122)
    {
        word[0]= word[0]-32;
    }
    cout<<word<<endl;
    return 0;
}
