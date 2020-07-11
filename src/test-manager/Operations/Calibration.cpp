#include "Calibration.h"

#include <iostream>

Calibration::Calibration(ITest* test) : m_test(test) {}
Calibration::~Calibration() {}

void Calibration::PerformOperation() {
  switch (m_test->GetTestType()) {
    case TestType::BIOCHEMISTRY:
      PerformBio();
      break;
    case TestType::IMMUNOLOGY:
      PerformImmuno();
      break;
    default:
      PerformRegularOperation();
      break;
  }
}

void Calibration::PerformRegularOperation() {
  std::cout << "Calibration regular test operation" << std::endl;
}
void Calibration::PerformBio() {
  std::cout << "Calibration microbiology operation" << std::endl;
}
void Calibration::PerformImmuno() {
  std::cout << "Calibration hematology operation" << std::endl;
}
