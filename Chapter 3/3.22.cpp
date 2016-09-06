// =====================================================================================
//
//       Filename:  3.22.cpp
//
//    Description:  Revise the loop that printed the first paragraph in text to instead
//                  change the elements in text that correspond to the first paragraph
//                  to all uppercase.
//
//                  After you've changed the text, print the contents
//
//        Version:  0.1
//        Created:  06/23/2015 12:49:01 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:
//
// =====================================================================================

#include <string>
#include <iostream>

using namespace std;


int main() {
    string text = "foo bar bar. Baz.\n\nSomething new.";
    if (text.begin() == text.end()) { return 1; }

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
      *it = toupper(*it);
    }


    cout << text << endl;

    return 0;
}
