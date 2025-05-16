#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin >> n;

        int best= 2;
        long long max_sum = 0;

        for (int x = 2; x <= n; ++x)
        {
            int k = n / x;
            long long sum = 1LL * x * k * (k + 1)/2;
            if (sum > max_sum)
            {
                max_sum = sum;
                best = x;
            }
        }

        cout << best<<endl;
    }

    return 0;
}
