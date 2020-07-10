#include "Test.h"

class Hematology : public Test {
 public:
  Hematology();

 private:
  TestType m_type;
  int m_specificPropD;
  int m_specificPropE;
};
