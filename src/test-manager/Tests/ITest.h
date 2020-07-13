#pragma once

#include <memory>
#include <string>

#include "Operations/IOperation.h"

class ITest {
 public:
  ITest() = default;
  ~ITest() = default;

  virtual void Accept(std::shared_ptr<IOperation> op) const = 0;

  virtual std::string GetPropertyA() const = 0;
  virtual std::string GetPropertyB() const = 0;
  virtual void SetPropertyA(const std::string &propA) = 0;
  virtual void SetPropertyB(const std::string &propB) = 0;
};
