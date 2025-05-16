#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        bool isSquare = true;
        if (n % 2 != 0)
        {
            isSquare = false;
        }
        else
        {
            int half = n / 2;
            for (int i = 0; i < half; ++i)
            {
                if (s[i] != s[half + i])
                {
                    isSquare = false;
                    break;
                }
            }
        }
        if (isSquare)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
