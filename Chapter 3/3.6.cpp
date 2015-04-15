// =====================================================================================
//
//       Filename:  3.6.cpp
//
//    Description:  Use a range for to change all the characters in a string to x
//
//        Version:  0.0.1
//        Created:  03/23/2015 09:06:41 AM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:  The Open Technology Institute
//
// =====================================================================================

#include <iostream>
#include <string>

using namespace std;

string convert_to_x(string s) {
    for (auto &c : s) {
        c = 'x';
    }
    return s;
}

int main() {
    string s;
    cout << "enter a string to convert: ";
    getline(cin, s);
    cout << "Converting " << s << endl;
    s = convert_to_x(s);
    cout << s << endl;
    return 0;
}
