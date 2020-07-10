#include "ITest.h"

class Immunology : public ITest {
 public:
  Immunology();
  ~Immunology();

  TestType GetTestType() override;
  void SetPropertyA(const int &propA) override;
  void SetPropertyB(const int &propB) override;
  void SetPropertyImmu(const int &propImmu);

 private:
  TestType m_type;
  int m_propA;
  int m_propB;
  int m_propImmu;
};
