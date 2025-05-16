#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[10];
        int result[10] = {0};

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int max_score = 0;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] > max_score)
            {
                result[i] = 1;
                max_score = A[i];
            }
        }

        for (int i = 0; i < N; ++i)
        {
            cout << result[i];
            if (i < N - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

