#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string s;


    cin >> n;
    cin >> s;

    int antonCount = 0, danikCount = 0;


    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            antonCount++;
        }
        else if (s[i] == 'D')
        {
            danikCount++;
        }
    }

    if (antonCount > danikCount)
    {
        cout << "Anton";
    }
    else if (antonCount == danikCount)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}
