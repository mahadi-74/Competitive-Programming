#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double n=3.14159,area,R;
   cin>>R;
   area=n*(R*R);
   cout<<"A="<<fixed<<setprecision(4)<<area<<endl;
   return 0;
}
