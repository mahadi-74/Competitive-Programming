#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string encrypted_message = "";

    for (char ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {

            encrypted_message += (ch - 'a' + 1) % 26 + 'a';
        }
        else
        {

            encrypted_message += (ch - 'a' + 2) % 26 + 'a';
        }
    }

    cout << encrypted_message << endl;

    return 0;
}

