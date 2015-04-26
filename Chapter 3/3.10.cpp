// =====================================================================================
//
//       Filename:  3.10.cpp
//
//    Description:  Write a program that reads a string of characters including
//                  punctuation and writes what was read but with the punctuation
//                  removed.
//
//        Version:  0.2.1
//        Created:  04/25/2015 03:19:48 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//
// =====================================================================================

#include <iostream>

using namespace std;


string fetch_user_string() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    return s;
}

string strip_punctuation(string s) {
    // This should really use string::erase instead of container vars
    // Throwing out of range errors on removal
    cout << "Stripping punctuation from string: " << s << endl;
    string nopunct;
    for (auto c : s) {
        if (ispunct(c)) {
            continue;
        }
        nopunct += c;
    }
    return nopunct;
}

int main() {
    string user_string;
    user_string = fetch_user_string();
    user_string = strip_punctuation(user_string);
    cout << "String is now: " << user_string << endl;
    return 0;
}