#pragma once

#include "IOperation.h"
#include "Tests/ITest.h"

class Calibration : public IOperation {
 public:
  Calibration();
  ~Calibration();

  void PerformOperation(const TestType &type) override;

 private:
  void PerformRegularOperation();
  void PerformBio();
  void PerformImmuno();
};
