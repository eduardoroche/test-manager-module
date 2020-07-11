#include "HematologyTest.h"

#include <iostream>
#include <string>

HematologyTest::HematologyTest() : m_type(TestType::HEMATOLOGY){};
HematologyTest::~HematologyTest() {}

TestType HematologyTest::GetTestType() { return m_type; }

void HematologyTest::SetPropertyA(const std::string &propA) {
  std::cout << "Biochemistry set common test property A: " << propA
            << std::endl;
}

void HematologyTest::SetPropertyB(const std::string &propB) {
  std::cout << "Biochemistry set common test property B: " << propB
            << std::endl;
}

void HematologyTest::SetPropertyHema(const std::string &propHema) {
  std::cout << "Hematology set specific test property Bio: " << propHema
            << std::endl;
}
