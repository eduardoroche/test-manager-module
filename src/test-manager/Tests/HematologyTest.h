#pragma once

#include "ITest.h"

class HematologyTest : public ITest {
 public:
  HematologyTest();
  ~HematologyTest();

  std::string GetPropertyA() override;
  std::string GetPropertyB() override;
  std::string GetPropertyHema();
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyHema(const std::string &propHema);

 private:
  std::string m_propA;
  std::string m_propB;
  std::string m_propHema;
};
