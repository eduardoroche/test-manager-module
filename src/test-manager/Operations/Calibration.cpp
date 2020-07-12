#include "Calibration.h"

#include <iostream>

Calibration::Calibration() {}
Calibration::~Calibration() {}

bool Calibration::visit(const BiochemistryTest *test) const {
  return PerformOp(test);
}
bool Calibration::visit(const HematologyTest *test) const {
  return PerformOp(test);
}
bool Calibration::visit(const MicrobiologyTest *test) const {
  return PerformOp(test);
}
bool Calibration::visit(const ImmunologyTest *test) const {
  return PerformOp(test);
}

bool Calibration::PerformOp(const BiochemistryTest *test) const {
  std::cout << "Performing Calibration on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
  return true;
}
bool Calibration::PerformOp(const HematologyTest *test) const {
  std::cout << "Performing Calibration on a Hematology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
  return true;
}
bool Calibration::PerformOp(const ImmunologyTest *test) const {
  std::cout << "Performing Calibration on a Immunology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
  return true;
}
bool Calibration::PerformOp(const MicrobiologyTest *test) const {
  std::cout << "Performing Calibration on a Microbiology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
  return true;
}
