#include "Quality.h"

#include <iostream>

Quality::Quality() {}
Quality::~Quality() {}

bool Quality::visit(const BiochemistryTest *test) const {
  return PerformOp(test);
}
bool Quality::visit(const HematologyTest *test) const {
  return PerformOp(test);
}
bool Quality::visit(const ImmunologyTest *test) const {
  return PerformOp(test);
}
bool Quality::visit(const MicrobiologyTest *test) const {
  return PerformOp(test);
}

bool Quality::PerformOp(const BiochemistryTest *test) const {
  std::cout << "Performing Quality on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
  return true;
}
bool Quality::PerformOp(const HematologyTest *test) const {
  std::cout << "Performing Quality on a Hematology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
  return true;
}
bool Quality::PerformOp(const ImmunologyTest *test) const {
  std::cout << "Performing Quality on a Immunology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
  return true;
}
bool Quality::PerformOp(const MicrobiologyTest *test) const {
  std::cout << "Performing Quality on a Microbiology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
  return true;
}
