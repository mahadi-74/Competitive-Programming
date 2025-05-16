#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cubes_perlevel=0;
    int height=0;
    int total=0;
    for(int i=1; i<=n; i++)
    {
        cubes_perlevel=i+cubes_perlevel;
        total+=cubes_perlevel;

        if(total>n)
        {
            break;
        }
        height++;

    }
    cout<<height<<endl;
    return 0;
}
