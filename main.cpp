#include <iostream>

int main() {
  int x{5};
  std::cout << x << '\n';  // removed endl cause it manually flushes the buffer
  return 0;
}