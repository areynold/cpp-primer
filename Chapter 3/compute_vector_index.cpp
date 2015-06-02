// =====================================================================================
//
//       Filename:  compute_vector_index.cpp
//
//    Description:  Count the number of grades in each cluster of 10.
//
//                  Assume the following list of grades:
//                  42 65 95 100 39 67 95 76 88 76 83 92 76 93
//
//                  Output should be:
//                  0 0 0 1 1 0 2 3 2 4 1
//
//        Version:  0.1
//        Created:  06/ 2/2015 12:45:26 PM
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
    vector<unsigned> scores(11, 0);
    vector<unsigned> grades{42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
    vector<unsigned> expected_result{0, 0, 0, 1, 1, 0, 2, 3, 2, 4, 1};
    
    for (auto &g : grades) {
        if (0 <= g <= 100) {
            ++scores[g/10];
        }
        ++g;
    }

    if (scores == expected_result) {
        cout << "Got the expected scores!" << endl;
    } else {
        cout << "Something went wrong" << endl;
        return 1;
    }

    return 0;
}
