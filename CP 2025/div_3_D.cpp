#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 200000;
int arr[MAX_N];

int find_Optimal_Score(int n, int k) {
    sort(arr, arr + n);
    int left = 0, right = n - 1;
    int score = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == k) {
            score++;
            left++;
            right--;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }
    return score;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << find_Optimal_Score(n, k) << endl;
    }

    return 0;
}

