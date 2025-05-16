#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;


        long long row1_used = min(a, m);
        long long row2_used = min(b, m);


        long long row1_remaining = m - row1_used;
        long long row2_remaining = m - row2_used;


        long long no_preference_seated = min(c, row1_remaining + row2_remaining);

        long long total_seated = row1_used + row2_used + no_preference_seated;
        cout << total_seated << endl;
    }

    return 0;
}

