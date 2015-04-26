// =====================================================================================
//
//       Filename:  3.10.cpp
//
//    Description:  Write a program that reads a string of characters including
//                  punctuation and writes what was read but with the punctuation
//                  removed.
//
//        Version:  0.0.1
//        Created:  04/25/2015 03:19:48 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//
// =====================================================================================

#include <iostream>
#include <string>
#include <bits/algorithmfwd.h>

using namespace std;


string fetch_user_string() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    return s;
}

string strip_punctuation(string s) {
    cout << "Stripping punctuation from string: " << s << endl;
//    for (char &c : s) {
//        if (ispunct(c)) {
//            s.erase(c, s.find_first_of(c));
//        }
//    }

    s.erase(
            remove_if(
                    s.begin(),
                    s.end(),
                    [&](decltype(*s.begin()) c) {
                        return ispunct(c);
                    } ),
            s.end()
    );
//    s.erase(
//            remove_if(s.begin(), s.end(),
//            [](char c) {
//                return std::ispunct(static_cast<unsigned char>(c));
//            }),
//            s.end());
    return s;
}

int main() {
    string user_string;
    user_string = fetch_user_string();
    user_string = strip_punctuation(user_string);
    cout << "String is now: " << user_string << endl;
    return 0;
}