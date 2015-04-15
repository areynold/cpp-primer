// =====================================================================================
//
//       Filename:  read_arbitrary_number_of_strings.cpp
//
//    Description:  Read an arbitrary number of strings
//
//        Version:  0.0.1
//        Created:  03/14/2015 12:11:17 PM
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

int main() {
    string word, word_container;
    while (cin >> word) {
        // cout << word << endl;
        word_container += word + "\n";
    }

    cout << word_container << endl;

    return 0;
}
