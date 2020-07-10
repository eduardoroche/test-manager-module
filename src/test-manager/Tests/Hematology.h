#include "ITest.h"

class Hematology : public ITest {
 public:
  Hematology();
  ~Hematology();

  void SetPropertyA(const int &propA) override;
  void SetPropertyB(const int &propB) override;
  void SetPropertyHema(const int &propHema);

 private:
  TestType m_type;
  int m_propA;
  int m_propB;
  int m_propHema;
};
