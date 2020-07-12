#pragma once

#include "Operation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"

class Calibration : public Operation {
 public:
  Calibration();
  ~Calibration();

  void visit(const BiochemistryTest *test) const override;
  void visit(const HematologyTest *test) const override;

 private:
  void PerformCalibration(BiochemistryTest *test);
  //  void PerformCalibration(HematologyTest *test);
  //  void PerformCalibration(ImmunologyTest *test);
  //  void PerformCalibration(MicrobiologyTest *test);

  // private:
  //  std::shared_ptr<ITest> m_test;
};
