#include "ITest.h"

class HematologyTest : public ITest {
 public:
  HematologyTest();
  ~HematologyTest();

  TestType GetTestType() override;
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyHema(const std::string &propHema);

 private:
  TestType m_type;
};
