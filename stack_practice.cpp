#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    int a,num;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>num;
        st.push(num);
        st.size();
        cout<<st.size()<<endl;
        while(!st.empty())
        {

            if(st.top()%2==0)
                cout<<st.top()<<endl;

                st.pop();
        }
    }
    return 0;
}
