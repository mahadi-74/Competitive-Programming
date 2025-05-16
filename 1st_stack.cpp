#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    int x,num,n;
    cin>>x;
    for(n=0;n<x;n++)
    {
        cin>>num;
        st.push(num);
    }
    while(!st.empty())
    {
        if(st.top()%2==0)
        {
            cout<<st.top()<<" ";
        }
        st.pop();
    }
    return 0;
}
