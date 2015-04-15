// =====================================================================================
//
//       Filename:  ispunct.cpp
//
//    Description:  Use range to count punctuation
//
//        Version:  0.0.1
//        Created:  03/23/2015 08:06:36 AM
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
    string s("Hello World!!!");
    // punct_cnt has the same type htat s.size returns
    decltype(s.size()) punct_cnt = 0;
    // count the number of punctuation characters in s
    for (auto c : s)        // for every char in s
        if (ispunct(c))     // if the character is punctuation
            ++punct_cnt;    // increment the punctuation counter
    cout << punct_cnt
         << " punctuation characters in " << s << endl;
    return 0;
}

