#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b = "";
        cin >> a;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] == 'p') b += 'q';
            else if (a[i] == 'q') b += 'p';
            else if (a[i] == 'w') b += 'w';
        }
        cout << b << endl;
    }
    return 0;
}
