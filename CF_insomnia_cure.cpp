#include <iostream>
#include <set>
using namespace std;

int dragons(int k, int l, int m, int n, int d)
{
    set<int> damaged;

    for (int i = k; i <= d; i += k)
        damaged.insert(i);
    for (int i = l; i <= d; i += l)
        damaged.insert(i);
    for (int i = m; i <= d; i += m)
        damaged.insert(i);
    for (int i = n; i <= d; i += n)
        damaged.insert(i);

    return damaged.size();

}

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    cout << dragons(k, l, m, n, d) << endl;
    return 0;
}
