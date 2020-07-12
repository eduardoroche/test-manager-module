#include "Calculation.h"

#include <iostream>

Calculation::Calculation() {}
Calculation::~Calculation() {}

void Calculation::visit(const BiochemistryTest *test) const { PerformOp(test); }
void Calculation::visit(const HematologyTest *test) const { PerformOp(test); }
void Calculation::visit(const ImmunologyTest *test) const { PerformOp(test); }
void Calculation::visit(const MicrobiologyTest *test) const { PerformOp(test); }

void Calculation::PerformOp(const BiochemistryTest *test) const {
  std::cout << "Performing Calculation on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
}
void Calculation::PerformOp(const HematologyTest *test) const {
  std::cout << "Performing Calculation on a Hematology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
}
void Calculation::PerformOp(const ImmunologyTest *test) const {
  std::cout << "Performing Calculation on a Immunology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
}
void Calculation::PerformOp(const MicrobiologyTest *test) const {
  std::cout << "Performing Calculation on a Microbiology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
}
