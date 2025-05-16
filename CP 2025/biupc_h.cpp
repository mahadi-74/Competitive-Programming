#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> results(x);
    for (int test = 0; test < x; ++test)
    {
        int n;
        cin >> n;
        vector<int> rings(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> rings[i];
        }

        multiset<int> towers;

        for (int i = 0; i < n; ++i)
        {
            auto it = towers.lower_bound(rings[i]);
            if (it != towers.end())
            {
                towers.erase(it);
            }
            towers.insert(rings[i]);
        }

        results[test] = towers.size();
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
