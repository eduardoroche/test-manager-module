#include "ITest.h"

class MicrobiologyTest : public ITest {
 public:
  MicrobiologyTest();
  ~MicrobiologyTest();

  TestType GetTestType() override;
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyMicro(const std::string &propMicro);

 private:
  TestType m_type;
};
