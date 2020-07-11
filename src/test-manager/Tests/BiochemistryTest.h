#include "ITest.h"

class BiochemistryTest : public ITest {
 public:
  BiochemistryTest();
  ~BiochemistryTest();

  TestType GetTestType() override;
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyBio(const std::string &propBio);

 private:
  TestType m_type;
};
