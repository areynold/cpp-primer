// =====================================================================================
//
//       Filename:  subscript.cpp
//
//    Description:  Use subscript to capitalize the first letter in a word
//
//        Version:  0.0.1
//        Created:  03/23/2015 08:23:40 AM
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

string capitalize(string s) {
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
    return s;
}

string iter_caps(string s) {
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index) {
        s[index] = toupper(s[index]);   // capitalize the current character
    }
    return s;
}

string random_access() {
    const string hexdigits = "0123456789ABCDEF";    // Possible hex digits
    cout << "Enter a series of numbers between 0 and 15 "
         << "separated by spaces. Hit enter when finished: " << endl;
    string result;          // holds hex-ed string
    string::size_type n;    // hold numbers from the input
    while (cin >> n) {
        if (n < hexdigits.size()) {     // ignore invalid input
            result += hexdigits[n];
        }
    }
    return result;
}

int main() {
    string s("hello world!!!");
    cout << "Capitalizing " << s << endl;
    cout << capitalize(s) << endl;
    cout << "\n" << endl;
    cout << "Use subscript for iteration" << endl;
    cout << iter_caps(s) << endl;

    cout << "Use subscript for random access" << endl;
    cout << random_access() << endl;
}
