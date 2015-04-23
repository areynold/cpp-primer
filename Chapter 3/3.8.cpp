// =====================================================================================
//
//       Filename:  3.8.cpp
//
//    Description:  Rewrite 3.6, first using a while and again using a traditional
//                  for loop. Of the 3 approaches, which do you prefer and why?
//
//        Version:  0.0.1
//        Created:  03/23/2015 09:06:41 AM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
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
    string r;  // Value of s as returned by function
    cout << "enter a string to convert: ";
    getline(cin, s);
    cout << "Converting " << s << endl;
    r = convert_to_x(s);
    cout << r << endl;

    r = while_to_x(s);
    cout << r << endl;

    r = tradfor_to_x(s);
    cout << r << endl;

    return 0;
}
