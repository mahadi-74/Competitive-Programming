#include <iostream>
#include <vector>
#include <string>

using namespace std;

string determineWinner(long long N, int P) {

    if (N % 2 == 0) {

        if (P == 2) {
            return "Oddius";
        } else {

            return "Oddius";
        }
    } else {

        if (P == 1) {
            return "Evenius";
        } else {

            return "Evenius";
        }
    }
}

int main() {
    int T;
    cin >> T;
    vector<string> results;

    for (int t = 1; t <= T; ++t) {
        long long N;
        int P;
        cin >> N >> P;
        string winner = determineWinner(N, P);
        results.push_back("Case " + to_string(t) + ": " + winner);
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
