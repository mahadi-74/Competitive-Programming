#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,avg;
    cin>>a>>b>>c;
    avg=(a*2 + b*3 + c*5)/(2+3+5);
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<avg<<endl;
    return 0;
}
