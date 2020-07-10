#pragma once

#include "Tests/ITest.h"

class IOperation {
 public:
  IOperation() = default;
  virtual ~IOperation() = default;

  virtual void PerformOperation(const TestType &type) = 0;
};
