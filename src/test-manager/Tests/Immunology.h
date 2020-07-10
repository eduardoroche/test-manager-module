#include "Test.h"

class Immunology : public Test {
 public:
  Immunology();

 private:
  TestType m_type;
  int m_specificPropD;
  int m_specificPropE;
};
