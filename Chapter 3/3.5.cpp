// =====================================================================================
//
//       Filename:  3.5.cpp
//
//    Description:  Write a program to read strings from stdin, concatenating what is
//                  read into one long string. Print the concatenated string.
//
//                  Change the program to separate adjacent strings by spaces
//
//        Version:  0.0.1
//        Created:  03/22/2015 05:51:42 PM
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

string concatenate_strings() {
    string concatenated, input;
    while (cin >> input) {
        if (concatenated.size() == 0) {
            concatenated = input;
        }
        concatenated += " " + input;
    }

    return concatenated;
}


int main() {
    cout << "Enter one string per line. Press Ctrl-D when you're done " << endl;

    string concatenated = concatenate_strings();
    cout << concatenated << endl;

    cout << "Splitting concatenated " << endl;

    return 0;
}
