#pragma once

#include <string>

class ITest {
 public:
  ITest() = default;
  virtual ~ITest() = default;

  virtual std::string GetPropertyA() = 0;
  virtual std::string GetPropertyB() = 0;
  virtual void SetPropertyA(const std::string &propA) = 0;
  virtual void SetPropertyB(const std::string &propB) = 0;
};
