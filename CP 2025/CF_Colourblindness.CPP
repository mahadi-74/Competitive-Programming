#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;
        bool same = true;
        for (int i = 0; i < n; ++i) {
            char c1 = row1[i];
            char c2 = row2[i];
            if (c1 == 'R' || c2 == 'R') {
                if (c1 != c2) {
                    same = false;
                    break;
                }
            }
        }
        cout << (same ? "YES" : "NO") << endl;
    }
    return 0;
}
