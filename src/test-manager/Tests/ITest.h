#pragma once

enum TestType { BIOCHEMISTRY, IMMUNOLOGY, MICROBIOLOGY, HEMATOLOGY };

class ITest {
 public:
  ITest() = default;
  virtual ~ITest() = default;

  virtual TestType GetTestType() = 0;
  virtual void SetPropertyA(const int &propA) = 0;
  virtual void SetPropertyB(const int &propB) = 0;
};
