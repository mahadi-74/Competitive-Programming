#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string w;
        cin>>w;

        w.replace(w.size()-2,2,"i");
        cout<<w<<endl;


    }
    return 0;
}
