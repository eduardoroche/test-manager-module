#pragma once

#include "Test.h"

class BiochemistryTest : public Test {
 public:
  BiochemistryTest();
  ~BiochemistryTest();

  void accept(Operation *op) const override;

  std::string GetPropertyA() override;
  std::string GetPropertyB() override;
  std::string GetPropertyBio();
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyBio(const std::string &propBio);

 private:
  std::string m_propA;
  std::string m_propB;
  std::string m_propBio;
};
