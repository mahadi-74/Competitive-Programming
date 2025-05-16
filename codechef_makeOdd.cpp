#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        int total = 0;
        for (int i = 0; i < N; ++i)
        {
            if ((A[i] == '1') && (B[i] == '1')||(A[i] == '1') && (B[i] == '0')||(A[i] == '0') && (B[i] == '1') )
            {
                total++;

            }
        }


        if (total % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

