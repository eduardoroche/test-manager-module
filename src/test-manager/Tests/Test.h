#include "ITest.h"

class Test : public ITest {
 public:
  Test();
  ~Test();

 private:
  int m_commonPropA;
  int m_commonPropB;
  int m_commonPropC;
};
