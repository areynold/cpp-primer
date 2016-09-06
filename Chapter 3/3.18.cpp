// =====================================================================================
//
//       Filename:  3.18.cpp
//
//    Description:  Take a series of numbers. Sum adjacent numbers.
//
//        Version:  0.1
//        Created:  06/11/2015  3:15:43 PM
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
    vector<int> num_v{0, 1, 2, 3, 4, 5};
    vector<int> sum_v;
    int num_v_size = length(num_v);
    cout << num_v_size << endl;
    
    return 0;
}
