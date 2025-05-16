#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string correct = "Timur";
        sort(s.begin(), s.end());
        sort(correct.begin(), correct.end());

        if (s == correct) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
