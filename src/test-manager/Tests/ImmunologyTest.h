#pragma once

#include "ITest.h"

class ImmunologyTest : public ITest {
 public:
  ImmunologyTest();
  ~ImmunologyTest();

  std::string GetPropertyA() override;
  std::string GetPropertyB() override;
  std::string GetPropertyImmu();
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyImmu(const std::string &propImmu);

 private:
  std::string m_propA;
  std::string m_propB;
  std::string m_propImmu;
};
