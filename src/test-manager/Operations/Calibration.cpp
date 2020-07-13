#include "Calibration.h"

#include <iostream>

Calibration::Calibration() {}
Calibration::~Calibration() {}

void Calibration::Visit(const BiochemistryTest *test) const {
  std::cout << "Performing Calibration on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
}
void Calibration::Visit(const HematologyTest *test) const {
  std::cout << "Performing Calibration on a Hematology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
}
void Calibration::Visit(const MicrobiologyTest *test) const {
  std::cout << "Performing Calibration on a Microbiology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
}
void Calibration::Visit(const ImmunologyTest *test) const {
  std::cout << "Performing Calibration on a Immunology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
}
