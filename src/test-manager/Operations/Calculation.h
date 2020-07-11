#pragma once

#include "IOperation.h"

class Calculation : public IOperation {
 public:
  Calculation();
  Calculation(ITest *test);
  ~Calculation();

  void PerformOperation() override;

 private:
  void PerformRegularOperation();
  void PerformMicro();
  void PerformHemato();

 private:
  ITest *m_test;
};
