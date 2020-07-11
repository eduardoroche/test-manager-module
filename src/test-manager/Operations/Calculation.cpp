#include "Calculation.h"

#include <iostream>

Calculation::Calculation(ITest* test) : m_test(test) {}
Calculation::~Calculation() {}

void Calculation::PerformOperation() {
  switch (m_test->GetTestType()) {
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
  std::cout << "Calculation regular test operation" << std::endl;
}
void Calculation::PerformMicro() {
  std::cout << "Calculation microbiology operation" << std::endl;
}
void Calculation::PerformHemato() {
  std::cout << "Calculation hematology operation" << std::endl;
}
