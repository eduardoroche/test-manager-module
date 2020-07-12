#include "MicrobiologyTest.h"

#include <iostream>
#include <string>

MicrobiologyTest::MicrobiologyTest() {
  std::cout << "New Microbiology test created" << std::endl;
};
MicrobiologyTest::~MicrobiologyTest() {}

std::string MicrobiologyTest::GetPropertyA() { return m_propA; }
std::string MicrobiologyTest::GetPropertyB() { return m_propB; }
std::string MicrobiologyTest::GetPropertyMicro() { return m_propMicro; }

void MicrobiologyTest::SetPropertyA(const std::string &propA) {
  m_propA = propA;
}

void MicrobiologyTest::SetPropertyB(const std::string &propB) {
  m_propB = propB;
}

void MicrobiologyTest::SetPropertyMicro(const std::string &propMicro) {
  m_propMicro = propMicro;
}
