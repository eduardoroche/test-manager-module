#include "ImmunologyTest.h"

#include <iostream>
#include <string>

ImmunologyTest::ImmunologyTest() : m_type(TestType::IMMUNOLOGY) {
  std::cout << "New Immunology test created" << std::endl;
};
ImmunologyTest::~ImmunologyTest() {}

TestType ImmunologyTest::GetTestType() { return m_type; }

void ImmunologyTest::SetPropertyA(const std::string &propA) {
  std::cout << "Biochemistry set common test property A: " << propA
            << std::endl;
}

void ImmunologyTest::SetPropertyB(const std::string &propB) {
  std::cout << "Biochemistry set common test property B: " << propB
            << std::endl;
}

void ImmunologyTest::SetPropertyImmu(const std::string &propImmu) {
  std::cout << "Biochemistry set specific test property Bio: " << propImmu
            << std::endl;
}
