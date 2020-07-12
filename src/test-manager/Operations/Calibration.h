#pragma once

#include "IOperation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"
#include "Tests/ImmunologyTest.h"
#include "Tests/MicrobiologyTest.h"

class Calibration : public IOperation {
 public:
  Calibration();
  Calibration(std::shared_ptr<ITest> test);
  ~Calibration();

  void PerformOperation() override;

 private:
  void PerformCalibration(BiochemistryTest *test);
  void PerformCalibration(HematologyTest *test);
  void PerformCalibration(ImmunologyTest *test);
  void PerformCalibration(MicrobiologyTest *test);

 private:
  std::shared_ptr<ITest> m_test;
};
