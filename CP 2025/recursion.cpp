#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int factorial;
    cin>>factorial;
    factorial=fact(factorial);
    cout<<factorial<<endl;

    getch();
}
