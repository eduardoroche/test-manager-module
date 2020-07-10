#include "Calculation.h"

#include <iostream>

Calculation::Calculation() {}
Calculation::~Calculation() {}

void Calculation::PerformOperation(const TestType &type) {
  switch (type) {
    case TestType::HEMATOLOGY:
      PerformHemato();
      break;
    case TestType::MICROBIOLOGY:
      PerformMicro();
      break;
    default:
      PerformRegularOperation();
      break;
  }
}

void Calculation::PerformRegularOperation() {
  std::cout << "Calculation regular operation" << std::endl;
}
void Calculation::PerformMicro() {
  std::cout << "Calculation microbiology operation" << std::endl;
}
void Calculation::PerformHemato() {
  std::cout << "Calculation hematology operation" << std::endl;
}
