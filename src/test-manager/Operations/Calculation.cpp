#include "Calculation.h"

#include <iostream>

Calculation::Calculation() {}
Calculation::~Calculation() {}

bool Calculation::visit(const BiochemistryTest *test) const {
  return PerformOp(test);
}
bool Calculation::visit(const HematologyTest *test) const {
  return PerformOp(test);
}
bool Calculation::visit(const ImmunologyTest *test) const {
  return PerformOp(test);
}
bool Calculation::visit(const MicrobiologyTest *test) const {
  return PerformOp(test);
}

bool Calculation::PerformOp(const BiochemistryTest *test) const {
  std::cout << "Performing Calculation on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
  return true;
}
bool Calculation::PerformOp(const HematologyTest *test) const {
  std::cout << "Performing Calculation on a Hematology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
  return true;
}
bool Calculation::PerformOp(const ImmunologyTest *test) const {
  std::cout << "Performing Calculation on a Immunology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
  return true;
}
bool Calculation::PerformOp(const MicrobiologyTest *test) const {
  std::cout << "Performing Calculation on a Microbiology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
  return true;
}
