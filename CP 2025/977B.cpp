#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> freqmap;


    for (int i = 0; i < s.length() - 1; i++) {
        string two_gram = "" ;
        two_gram += s[i] ;
        two_gram += s[i+1] ;

        freqmap[two_gram]++;
    }

    int high_freq = 0;
    string most_twogram;


    for (const auto &entry : freqmap) {
        if (entry.second > high_freq) {
            high_freq = entry.second;
            most_twogram = entry.first;
        }
    }

    cout << most_twogram << endl;
    return 0;
}
