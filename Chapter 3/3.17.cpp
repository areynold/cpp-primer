// =====================================================================================
//
//       Filename:  3.17.cpp
//
//    Description:  Read a sequence of words from cin and store the values in a vector
//
//                  After you've read all the words, process the vector and change
//                  each word to uppercase.
//
//                  Print the transformed elements, 8 to a line.
//
//        Version:  0.1
//        Created:  06/ 3/2015 12:34:30 PM
//       Revision:  none
//       Compiler:  gcc
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:  
//
// =====================================================================================


#include <vector>
#include <string>
#include <iostream>

using namespace std;


int main() {
    vector<string> word_list;
    string word_in;

    while (cin >> word_in) {
        word_list.push_back(word_in);
    }

    for (auto &w : word_list) {
        cout << w << endl;
    }
    return 0;
}
