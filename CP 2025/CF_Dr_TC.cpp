#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int original_ones = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            char c = s[i];
            if (c == '1')
            {
                original_ones++;
            }
        }
        int total = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                total += original_ones - 1;
            }
            else
            {
                total += original_ones + 1;
            }
        }
        cout << total << endl;
    }
    return 0;
}
