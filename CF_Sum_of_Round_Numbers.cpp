#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> rn;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                rn.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        cout << rn.size() << endl;
        for (int num : rn) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
    }

