#pragma once

#include <string>

enum TestType { BIOCHEMISTRY, IMMUNOLOGY, MICROBIOLOGY, HEMATOLOGY };

class ITest {
 public:
  ITest() = default;
  virtual ~ITest() = default;

  virtual TestType GetTestType() = 0;
  virtual void SetPropertyA(const std::string &propA) = 0;
  virtual void SetPropertyB(const std::string &propB) = 0;
};
