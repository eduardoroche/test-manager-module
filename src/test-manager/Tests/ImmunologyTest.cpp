#include "ImmunologyTest.h"

#include <iostream>
#include <string>

ImmunologyTest::ImmunologyTest() {
  std::cout << "New Immunology test created" << std::endl;
};
ImmunologyTest::~ImmunologyTest() {}

bool ImmunologyTest::accept(Operation *op) const { return op->visit(this); }

std::string ImmunologyTest::GetPropertyA() const { return m_propA; }
std::string ImmunologyTest::GetPropertyB() const { return m_propB; }
std::string ImmunologyTest::GetPropertyImmu() const { return m_propImmu; }

void ImmunologyTest::SetPropertyA(const std::string &propA) { m_propA = propA; }

void ImmunologyTest::SetPropertyB(const std::string &propB) { m_propB = propB; }

void ImmunologyTest::SetPropertyImmu(const std::string &propImmu) {
  m_propImmu = propImmu;
}
