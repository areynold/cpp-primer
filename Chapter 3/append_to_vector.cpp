// =====================================================================================
//
//       Filename:  append_to_vector.cpp
//
//    Description:  Use push_back() to add elements to a vector
//
//        Version:  0.1
//        Created:  05/ 8/2015 12:28:16 PM
//       Revision:  none
//       Compiler:  gcc
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
    vector<int> v2;
    for (int i = 0; i <= 100; i++) {
        v2.push_back(i);
    }

    cout << v2[35] << endl;

    string word;
    vector<string> text;
    while (cin >> word) {
        text.push_back(word);
    }

    // NOTE: Can't use range-based for loop if loop changes size of vector!
    for (auto &i : text) {
        cout << i << endl;
    }
    
    return 0;
}
