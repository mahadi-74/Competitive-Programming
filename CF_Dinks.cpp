#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,x;
    double sum=0.0,avg;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>> x ;
        sum += x;
    }
    avg =sum/n;
    cout<< fixed <<setprecision(12)<<avg<<endl;
    return 0;
}
