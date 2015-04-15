// =====================================================================================
//
//       Filename:  getline.cpp
//
//    Description:  Example of the getline string method
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

using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        cout << line << endl;
    }

    return 0;
}
