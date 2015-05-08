// =====================================================================================
//
//       Filename:  3.14.cpp
//
//    Description:  Write a program to read a sequence of ints from cin
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

using namespace std;


int main() {
    vector<int> int_vector;
    int user_int;

    cout << "Enter a bunch of integers. Ctrl+D to stop." << endl;
    while (cin >> user_int) {
        int_vector.push_back(user_int);
    }

    for (auto &i : int_vector) {
        cout << i << endl;
    }
    return 0;
}
