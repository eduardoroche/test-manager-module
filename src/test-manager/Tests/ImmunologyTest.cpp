#include "ImmunologyTest.h"

#include <iostream>

ImmunologyTest::ImmunologyTest() {
  std::cout << "New Immunology test created" << std::endl;
};
ImmunologyTest::~ImmunologyTest() {}

void ImmunologyTest::accept(std::shared_ptr<IOperation> op) const {
  op->visit(this);
}

std::string ImmunologyTest::GetPropertyA() const { return m_propA; }
std::string ImmunologyTest::GetPropertyB() const { return m_propB; }
std::string ImmunologyTest::GetPropertyImmu() const { return m_propImmu; }

void ImmunologyTest::SetPropertyA(const std::string &propA) { m_propA = propA; }

void ImmunologyTest::SetPropertyB(const std::string &propB) { m_propB = propB; }

void ImmunologyTest::SetPropertyImmu(const std::string &propImmu) {
  m_propImmu = propImmu;
}
