#pragma once

#include "Test.h"

class ImmunologyTest : public Test {
 public:
  ImmunologyTest();
  ~ImmunologyTest();

  bool accept(Operation *op) const override;

  std::string GetPropertyA() const override;
  std::string GetPropertyB() const override;
  std::string GetPropertyImmu() const;
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyImmu(const std::string &propImmu);

 private:
  std::string m_propA;
  std::string m_propB;
  std::string m_propImmu;
};
