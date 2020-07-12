#include "Quality.h"

#include <iostream>

Quality::Quality() {}
Quality::~Quality() {}

void Quality::visit(const BiochemistryTest *test) const { PerformOp(test); }
void Quality::visit(const HematologyTest *test) const { PerformOp(test); }
void Quality::visit(const ImmunologyTest *test) const { PerformOp(test); }
void Quality::visit(const MicrobiologyTest *test) const { PerformOp(test); }

void Quality::PerformOp(const BiochemistryTest *test) const {
  std::cout << "Performing Quality on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
}
void Quality::PerformOp(const HematologyTest *test) const {
  std::cout << "Performing Quality on a Hematology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
}
void Quality::PerformOp(const ImmunologyTest *test) const {
  std::cout << "Performing Quality on a Immunology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
}
void Quality::PerformOp(const MicrobiologyTest *test) const {
  std::cout << "Performing Quality on a Microbiology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
}
