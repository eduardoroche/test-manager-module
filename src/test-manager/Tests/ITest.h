#pragma once

enum TestType { BIOCHEMISTRY, IMMUNOLOGY, MICROBIOLOGY, HEMATOLOGY };

class ITest {
 public:
  ITest() = default;
  virtual ~ITest() = default;
};
