#include "Calibration.h"

#include <iostream>

Calibration::Calibration(std::shared_ptr<ITest> test) : m_test(test) {}
Calibration::~Calibration() {}

void Calibration::PerformOperation() {
  if (m_test == nullptr) {
    return;
  }
  if (BiochemistryTest *test = dynamic_cast<BiochemistryTest *>(m_test.get());
      test != nullptr) {
    PerformCalibration(test);
  } else if (HematologyTest *test =
                 dynamic_cast<HematologyTest *>(m_test.get());
             test != nullptr) {
    PerformCalibration(test);
  } else if (ImmunologyTest *test =
                 dynamic_cast<ImmunologyTest *>(m_test.get());
             test != nullptr) {
    PerformCalibration(test);
  } else if (MicrobiologyTest *test =
                 dynamic_cast<MicrobiologyTest *>(m_test.get());
             test != nullptr) {
    PerformCalibration(test);
  }
}

void Calibration::PerformCalibration(BiochemistryTest *test) {
  std::cout << "Performing Calibration on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
}
void Calibration::PerformCalibration(HematologyTest *test) {
  std::cout << "Performing Calibration on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyHema() << std::endl;
}
void Calibration::PerformCalibration(ImmunologyTest *test) {
  std::cout << "Performing Calibration on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyImmu() << std::endl;
}
void Calibration::PerformCalibration(MicrobiologyTest *test) {
  std::cout << "Performing Calibration on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyMicro() << std::endl;
}
