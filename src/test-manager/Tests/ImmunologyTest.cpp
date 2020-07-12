#include "ImmunologyTest.h"

#include <iostream>
#include <string>

ImmunologyTest::ImmunologyTest() {
  std::cout << "New Immunology test created" << std::endl;
};
ImmunologyTest::~ImmunologyTest() {}

std::string ImmunologyTest::GetPropertyA() { return m_propA; }
std::string ImmunologyTest::GetPropertyB() { return m_propB; }
std::string ImmunologyTest::GetPropertyImmu() { return m_propImmu; }

void ImmunologyTest::SetPropertyA(const std::string &propA) { m_propA = propA; }

void ImmunologyTest::SetPropertyB(const std::string &propB) { m_propB = propB; }

void ImmunologyTest::SetPropertyImmu(const std::string &propImmu) {
  m_propImmu = propImmu;
}
