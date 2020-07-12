#pragma once

#include <string>

#include "Operations/Operation.h"

class Test {
 public:
  virtual void accept(Operation *op) const = 0;

  virtual std::string GetPropertyA() const = 0;
  virtual std::string GetPropertyB() const = 0;
  virtual void SetPropertyA(const std::string &propA) = 0;
  virtual void SetPropertyB(const std::string &propB) = 0;
};
