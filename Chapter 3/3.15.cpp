// =====================================================================================
//
//       Filename:  3.14.cpp
//
//    Description:  Write a program to read a sequence of strings from cin
//                  and store them in a vector
//
//        Version:  0.1
//        Created:  05/ 8/2015 12:41:27 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:  
//
// =====================================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    vector<string> string_vector;
    string user_string;

    cout << "Enter a bunch of strings. Ctrl+D to stop." << endl;
    while (cin >> user_string) {
        string_vector.push_back(user_string);
    }

    for (auto &s : string_vector) {
        cout << s << endl;
    }
    return 0;
}
