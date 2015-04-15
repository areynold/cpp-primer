// =====================================================================================
//
//       Filename:  getline.cpp
//
//    Description:  Example of the empty and size string methods
//
//        Version:  0.0.1
//        Created:  03/14/2015 12:17:53 PM
//       Revision:  none
//       Compiler:  gcc
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:  The Open Technology Institute
//
// =====================================================================================

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        if (!line.empty()) {
            string::size_type len = line.size();
            cout << line << " is " << len << " characters long" << endl;

            cout << "len has type " << typeid(len).name() << endl;
        }
    }

    return 0;
}
