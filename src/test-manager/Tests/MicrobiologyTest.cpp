#include "MicrobiologyTest.h"

#include <iostream>
#include <string>

MicrobiologyTest::MicrobiologyTest() : m_type(TestType::MICROBIOLOGY){};
MicrobiologyTest::~MicrobiologyTest() {}

TestType MicrobiologyTest::GetTestType() { return m_type; }

void MicrobiologyTest::SetPropertyA(const std::string &propA) {
  std::cout << "Biochemistry set common test property A: " << propA
            << std::endl;
}

void MicrobiologyTest::SetPropertyB(const std::string &propB) {
  std::cout << "Biochemistry set common test property B: " << propB
            << std::endl;
}

void MicrobiologyTest::SetPropertyMicro(const std::string &propMicro) {
  std::cout << "Biochemistry set specific test property Bio: " << propMicro
            << std::endl;
}
