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
#include <algorithm>

using namespace std;


string convert_to_upper(string word) {
    for (auto &c : word) {
        c = toupper(c);
    }
    return word;
}

int main() {
    vector<string> word_list;
    string word_in;

    while (cin >> word_in) {
        // Accept single or multiline input
        word_in.erase(remove(word_in.begin(), word_in.end(), '\n'), word_in.end());
        word_in = convert_to_upper(word_in);
        word_list.push_back(word_in);
    }

    for (string &w : word_list) {
        // Find element position in vector
        // Looped find is inefficient. Look at map or hashmap.
        int pos = find(word_list.begin(), word_list.end(), w) - word_list.begin();
        pos += 1;   // We want 1-index, not 0-index for our output

        cout << w;
        if (pos % 8 == 0) { 
            cout << endl;
        } else {
            cout << " ";
        }
    }
    return 0;
}
