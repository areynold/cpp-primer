// =====================================================================================
//
//       Filename:  3.16.cpp
//
//    Description:  Print the size and contents of the vectors from ex3.13
//
//        Version:  0.1
//        Created:  06/ 2/2015  1:03:55 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:
//
// =====================================================================================

#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3 (10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    return 0;
}
