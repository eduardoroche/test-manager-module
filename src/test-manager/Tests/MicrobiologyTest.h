#pragma once

#include "ITest.h"

class MicrobiologyTest : public ITest {
 public:
  MicrobiologyTest();
  ~MicrobiologyTest();

  std::string GetPropertyA() override;
  std::string GetPropertyB() override;
  std::string GetPropertyMicro();
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyMicro(const std::string &propMicro);

 private:
  std::string m_propA;
  std::string m_propB;
  std::string m_propMicro;
};
