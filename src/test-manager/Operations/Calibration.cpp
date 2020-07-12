#include "Calibration.h"

#include <iostream>

Calibration::Calibration() {}
Calibration::~Calibration() {}

void Calibration::visit(const BiochemistryTest *test) const { PerformOp(test); }
void Calibration::visit(const HematologyTest *test) const { PerformOp(test); }
void Calibration::visit(const MicrobiologyTest *test) const { PerformOp(test); }
void Calibration::visit(const ImmunologyTest *test) const { PerformOp(test); }

void Calibration::PerformOp(const BiochemistryTest *test) const {
  std::cout << "Performing Calibration on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
}
void Calibration::PerformOp(const HematologyTest *test) const {
  std::cout << "Performing Calibration on a Hematology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
}
void Calibration::PerformOp(const ImmunologyTest *test) const {
  std::cout << "Performing Calibration on a Immunology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
}
void Calibration::PerformOp(const MicrobiologyTest *test) const {
  std::cout << "Performing Calibration on a Microbiology test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
}
