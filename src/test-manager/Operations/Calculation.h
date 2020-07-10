#pragma once

#include "IOperation.h"

class Calculation : public IOperation {
 public:
  Calculation();
  ~Calculation();

  void PerformOperation(const TestType &type) override;

 private:
  void PerformRegularOperation();
  void PerformMicro();
  void PerformHemato();
};
