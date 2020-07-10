#include "Test.h"

class Microbiology : public Test {
 public:
  Microbiology();

 private:
  TestType m_type;
  int m_specificPropD;
  int m_specificPropE;
};
