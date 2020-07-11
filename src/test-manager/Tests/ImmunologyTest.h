#include "ITest.h"

class ImmunologyTest : public ITest {
 public:
  ImmunologyTest();
  ~ImmunologyTest();

  TestType GetTestType() override;
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyImmu(const std::string &propImmu);

 private:
  TestType m_type;
};
