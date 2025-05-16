#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p[100];
    int res[100];

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }


    for (int i = 0; i < n; ++i)
    {
        res[p[i] - 1] = i + 1;
    }


    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }

    return 0;
}

