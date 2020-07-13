#pragma once

#include "ITest.h"

class MicrobiologyTest : public ITest {
 public:
  MicrobiologyTest();
  ~MicrobiologyTest();

  void accept(IOperation *op) const override;

  std::string GetPropertyA() const override;
  std::string GetPropertyB() const override;
  std::string GetPropertyMicro() const;
  void SetPropertyA(const std::string &propA) override;
  void SetPropertyB(const std::string &propB) override;
  void SetPropertyMicro(const std::string &propMicro);

 private:
  std::string m_propA;
  std::string m_propB;
  std::string m_propMicro;
};
