// =====================================================================================
//
//       Filename:  change_char_in_range.cpp
//
//    Description:  Use range for to change the chars in a string
//
//                  must define the loop var as a reference type
//
//        Version:  0.0.1
//        Created:  03/23/2015 08:11:59 AM
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
    string s("Hello world!!!");
    // convert s to upper case
    cout << "Converting " << s << endl;
    for (auto &c : s) {     // for every char in s (note c is a reference)
        c = toupper(c);
    }
    cout << s << endl;
    return 0;
}
