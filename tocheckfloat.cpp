#include <iostream>
#include <string>

using namespace std;


bool is_Float(const string& str) {
    int length = str.length();
    bool decimal_point_found = false;
    bool digit_found = false;

    for (int i = 0; i < length; ++i) {
        if (isdigit(str[i])) {

            digit_found = true;
        } else if (str[i] == '.') {

            if (decimal_point_found) {

                return false;
            }
            decimal_point_found = true;
        } else {

            return false;
        }
    }


    return digit_found;
}

int main() {
    string lexim;

    cout << "Enter a lexeme: ";
    cin >> lexim;

    if (is_Float(lexim)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
