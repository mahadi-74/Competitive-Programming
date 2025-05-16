#include<iostream>
using namespace std;
int main()
{
    int t,firstNum,lastNum;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        firstNum=n/10;
        lastNum=n%10;
        cout<< firstNum+lastNum<<endl;
    }
    return 0;
}
