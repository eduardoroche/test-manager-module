#pragma once

#include <memory>

#include "Tests/ITest.h"

class IOperation {
 public:
  IOperation() = default;
  IOperation(ITest *test);
  virtual ~IOperation() = default;

  virtual void PerformOperation() = 0;
};
