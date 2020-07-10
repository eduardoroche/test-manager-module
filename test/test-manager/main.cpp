#include <iostream>

#include "Tests/ITest.h"
#include "Tests/Test.h"

int main() {
  ITest *test = new Test();
  std::cout << "Hello world!" << std::endl;
}
