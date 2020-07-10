#include "Calibration.h"

#include <iostream>

Calibration::Calibration() {}

Calibration::~Calibration() {}

void Calibration::PerformOperation(const TestType &type) {
  switch (type) {
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
  std::cout << "Calibration regular operation" << std::endl;
}
void Calibration::PerformBio() {
  std::cout << "Calibration microbiology operation" << std::endl;
}
void Calibration::PerformImmuno() {
  std::cout << "Calibration hematology operation" << std::endl;
}
