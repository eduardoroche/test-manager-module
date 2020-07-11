#pragma once

#include "IOperation.h"

class Calibration : public IOperation {
 public:
  Calibration();
  Calibration(ITest *test);
  ~Calibration();

  void PerformOperation() override;

 private:
  void PerformRegularOperation();
  void PerformBio();
  void PerformImmuno();

 private:
  ITest *m_test;
};
