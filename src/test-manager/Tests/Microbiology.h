#include "ITest.h"

class Microbiology : public ITest {
 public:
  Microbiology();
  ~Microbiology();

  TestType GetTestType() override;
  void SetPropertyA(const int &propA) override;
  void SetPropertyB(const int &propB) override;
  void SetPropertyMicro(const int &propMicro);

 private:
  TestType m_type;
  int m_propA;
  int m_propB;
  int m_propMicro;
};
