#include "BiochemistryTest.h"

#include <iostream>
#include <string>

BiochemistryTest::BiochemistryTest() : m_type(TestType::BIOCHEMISTRY) {
  std::cout << "New Biochemistry test created" << std::endl;
};
BiochemistryTest::~BiochemistryTest() {}

TestType BiochemistryTest::GetTestType() { return m_type; }

void BiochemistryTest::SetPropertyA(const std::string &propA) {
  std::cout << "Biochemistry set common test property A: " << propA
            << std::endl;
}

void BiochemistryTest::SetPropertyB(const std::string &propB) {
  std::cout << "Biochemistry set common test property B: " << propB
            << std::endl;
}

void BiochemistryTest::SetPropertyBio(const std::string &propBio) {
  std::cout << "Biochemistry set specific test property Bio: " << propBio
            << std::endl;
}
