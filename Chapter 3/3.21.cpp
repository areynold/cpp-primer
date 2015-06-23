// =====================================================================================
//
//       Filename:  3.16.cpp
//
//    Description:  Print the size and contents of the vectors from ex3.13 using
//                  iterators
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
#include <string>
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

    // Using a vector for each vector type is dumb
    vector<vector<int>> int_v{v1, v2, v3, v4, v5};
    vector<vector<string>> string_v{v6, v7};

    // See if this can be rewritten without nested loops
    for (auto it_intv = int_v.cbegin(); it_intv != int_v.cend(); ++it_intv) {
      cout << it_intv->size() << " elements" << endl;

      if (it_intv->empty()) { continue; }

      for (auto itv_element = it_intv->cbegin(); itv_element != it_intv->cend(); ++itv_element) {
        cout << "\t" << *itv_element << endl;
      }
    }

    for (auto it_sv = string_v.cbegin(); it_sv != string_v.end(); ++it_sv) {
      cout << it_sv->size() << " elements" << endl;
      if (it_sv->empty()) { continue; }
      for (auto its_element = it_sv->cbegin(); its_element != it_sv->end(); ++its_element) {
        cout << "\t" << *its_element << endl;
      }
    }
    return 0;
}
