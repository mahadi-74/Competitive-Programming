#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first_score;
    cin >> first_score;

    int count = 0;
    int best = first_score, worst = first_score;

    for (int i = 1; i < n; i++)
    {
        int score;
        cin >> score;

        if (score > best)
        {
            count++;
            best = score;
        }
        else if (score < worst)
        {
            count++;
            worst = score;
        }
    }

    cout << count << endl;
    return 0;
}
