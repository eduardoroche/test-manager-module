#pragma once

#include "Operation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"

class Calculation : public Operation {
 public:
  Calculation();
  ~Calculation();

  void visit(const BiochemistryTest *test) const override;
  void visit(const HematologyTest *test) const override;

 private:
  void PerformCalculation(BiochemistryTest *test);
  //  void PerformCalculation(HematologyTest *test);
  //  void PerformCalculation(ImmunologyTest *test);
  //  void PerformCalculation(MicrobiologyTest *test);

  //  private:
  //  std::shared_ptr<ITest> m_test;
};
