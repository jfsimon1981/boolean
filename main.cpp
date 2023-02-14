// BSD-3-Clause
#include "bsd-3-clause.h"

 /*
 * 0x5e & 0x3c == 0x1c
 * 0x5e | 0x3c == 0x
 * 0x5e ^ 0x3c == 0x
 */

#include <iostream>
using namespace std;
int main() {
  int x = 0x5e;
  int y = 0x3c;
  // Logical AND
  {
    auto y1 = y;
    y1 &= x;
    cout << std::hex << "0x" << y1 << endl;
  }
  // Logical OR
  {
    auto y2 = y;
    y2 |= x;
    cout << std::hex << "0x" << y2 << endl;
  }
  // Logical XOR
  {
    auto y3 = y;
    y3 ^= x;
    cout << std::hex << "0x" << y3 << endl;
  }
}
