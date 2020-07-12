#include "Calculation.h"

#include <iostream>

Calculation::Calculation() {}
Calculation::~Calculation() {}

void Calculation::visit(const BiochemistryTest *test) const { (void)test; }
void Calculation::visit(const HematologyTest *test) const { (void)test; }

// void Calculation::PerformOperation() {
//  //  if (m_test == nullptr) {
//  //    return;
//  //  }
//  //  if (BiochemistryTest *test = dynamic_cast<BiochemistryTest
//  //  *>(m_test.get());
//  //      test != nullptr) {
//  //    PerformCalculation(test);
//  //  } else if (HematologyTest *test =
//  //                 dynamic_cast<HematologyTest *>(m_test.get());
//  //             test != nullptr) {
//  //    PerformCalculation(test);
//  //  } else if (ImmunologyTest *test =
//  //                 dynamic_cast<ImmunologyTest *>(m_test.get());
//  //             test != nullptr) {
//  //    PerformCalculation(test);
//  //  } else if (MicrobiologyTest *test =
//  //                 dynamic_cast<MicrobiologyTest *>(m_test.get());
//  //             test != nullptr) {
//  //    PerformCalculation(test);
//  //  }
//}

void Calculation::PerformCalculation(BiochemistryTest *test) {
  std::cout << "Performing Calculation on a Biochemistry test. Properties: "
            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
            << test->GetPropertyBio() << std::endl;
}
// void Calculation::PerformCalculation(HematologyTest *test) {
//  std::cout << "Performing Calculation on a Biochemistry test. Properties: "
//            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
//            << test->GetPropertyHema() << std::endl;
//}
// void Calculation::PerformCalculation(ImmunologyTest *test) {
//  std::cout << "Performing Calculation on a Biochemistry test. Properties: "
//            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
//            << test->GetPropertyImmu() << std::endl;
//}
// void Calculation::PerformCalculation(MicrobiologyTest *test) {
//  std::cout << "Performing Calculation on a Biochemistry test. Properties: "
//            << test->GetPropertyA() << ", " << test->GetPropertyB() << " and "
//            << test->GetPropertyMicro() << std::endl;
//}
