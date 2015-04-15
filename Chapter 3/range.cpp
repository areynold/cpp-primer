// =====================================================================================
//
//       Filename:  range.cpp
//
//    Description:  quicky range example
//
//        Version:  0.0.1
//        Created:  03/23/2015 08:02:14 AM
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
    string word = "foo bar baz boogers";
    for (auto c : word) {
        cout << c << endl;
    }
    return 0;
}

