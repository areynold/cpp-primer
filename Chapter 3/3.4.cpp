// =====================================================================================
//
//       Filename:  3.4.cpp
//
//    Description:  Write a program to read two strings and report whether the strings
//                  are equal. If not, report which of the two is larger.
//
//                  Now, change the program to report whether the strings have the
//                  same length, and if not, report which is longer
//
//        Version:  0.0.1
//        Created:  03/22/2015 08:29:02 AM
//       Revision:  none
//       Compiler:  gcc
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:  The Open Technology Institute
//
// =====================================================================================

#include <iostream>
#include <string>

using namespace std;

void string_equal(string a, string b) {
    if (a == b) {
        cout << a << " and " << b << " are equal" << endl; 
        return;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
        return;
    }
    cout << a << " is greater than " << b << endl;
    return;
}

void string_length(string a, string b) {
    if (a.size() == b.size()) {
        cout << a << " and " << b << " are the same length" << endl;
        return;
    } else if (a.size() < b.size()) {
        cout << a << " is shorter than " << b << endl;
        return;
    }
    cout << a << " is longer than " << b << endl;
    return;
}

int main() {
    string a, b;

    cout << "Enter a string: ";
    cin >> a;
    cout << "Enter another string: ";
    cin >> b;

    cout << a << ", " << b << endl;

    // strings equal
    // which is larger
    // using ==
    string_equal(a, b);

    // same length
    // which is longer
    // using line.size()
    string_length(a, b);

    return 0;
}
