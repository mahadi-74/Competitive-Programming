#include <iostream>
#include <algorithm>
using namespace std;

// Function to compute the minimum value of x
long long computeMin(long long x, long long n, long long m)
{
    // Perform floor operations first, then ceiling operations
    for (long long i = 0; i < n; ++i)
    {
        x = x / 2;
        if (x == 0) break; // No further change if x is 0
    }
    for (long long i = 0; i < m; ++i)
    {
        x = (x + 1) / 2;
        if (x == 0) break; // No further change if x is 0
    }
    return x;
}

// Function to compute the maximum value of x
long long computeMax(long long x, long long n, long long m)
{
    // Perform ceiling operations first, then floor operations
    for (long long i = 0; i < m; ++i)
    {
        x = (x + 1) / 2;
        if (x == 0) break; // No further change if x is 0
    }
    for (long long i = 0; i < n; ++i)
    {
        x = x / 2;
        if (x == 0) break; // No further change if x is 0
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x, n, m;
        cin >> x >> n >> m;

        // Compute minimum and maximum values
        long long minX = computeMin(x, n, m);
        long long maxX = computeMax(x, n, m);

        // Output the results
        cout << minX << " " << maxX << "\n";
    }
    return 0;
}
