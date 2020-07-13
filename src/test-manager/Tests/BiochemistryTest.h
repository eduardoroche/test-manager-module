#pragma once

#include "ITest.h"

class BiochemistryTest : public ITest {
 public:
  BiochemistryTest();
  ~BiochemistryTest();

  void Accept(std::shared_ptr<IOperation> op) const override;

  std::string GetPropertyA() const override;
  std::string GetPropertyB() const override;
  std::string GetPropertyBio() const;
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyBio(const std::string &propBio);

 private:
  std::string m_propA;
  std::string m_propB;
  std::string m_propBio;
};
