// =====================================================================================
//
//       Filename:  3.2.cpp
//
//    Description:  Write a program to read from std input a line at a time.
//                  Modify the program to read a word at a time
//
//        Version:  0.0.1
//        Created:  03/14/2015 12:39:16 PM
//       Revision:  none
//       Compiler:  gcc
//
//         Author:  Andrew Reynolds (areynold), andrew@chambana.net
//   Organization:  The Open Technology Institute
//
// =====================================================================================

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void read_line() {
    string line;

    while(getline(cin, line)) {
        cout << line << endl;
    }    
}

void read_word() {
    string word;

    while(cin >> word) {
        cout << word << endl;
    }
}

int main() {
    string choice;
    cout << "Read line or word? ";
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    cout << "You chose " << choice << endl;

    if (choice == "line") {
        read_line();
    }

    else if (choice == "word") {
        read_word();
    }

    else {
        cout << "Sorry. Didn't understand." << endl;
        return 1;
    }

    read_word();

    return 0;
}
