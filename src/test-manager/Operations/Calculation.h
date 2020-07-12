#pragma once

#include "IOperation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"
#include "Tests/ImmunologyTest.h"
#include "Tests/MicrobiologyTest.h"

class Calculation : public IOperation {
 public:
  Calculation();
  Calculation(std::shared_ptr<ITest> test);
  ~Calculation();

  void PerformOperation() override;

 private:
  void PerformCalculation(BiochemistryTest *test);
  void PerformCalculation(HematologyTest *test);
  void PerformCalculation(ImmunologyTest *test);
  void PerformCalculation(MicrobiologyTest *test);

 private:
  std::shared_ptr<ITest> m_test;
};
