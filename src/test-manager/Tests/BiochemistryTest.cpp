#include "BiochemistryTest.h"

#include <iostream>
#include <string>

BiochemistryTest::BiochemistryTest() {
  std::cout << "New Biochemistry test created" << std::endl;
};
BiochemistryTest::~BiochemistryTest() {}

void BiochemistryTest::accept(Operation *op) const { op->visit(this); }

std::string BiochemistryTest::GetPropertyA() { return m_propA; }
std::string BiochemistryTest::GetPropertyB() { return m_propB; }
std::string BiochemistryTest::GetPropertyBio() { return m_propBio; }

void BiochemistryTest::SetPropertyA(const std::string &propA) {
  m_propA = propA;
}

void BiochemistryTest::SetPropertyB(const std::string &propB) {
  m_propB = propB;
}

void BiochemistryTest::SetPropertyBio(const std::string &propBio) {
  m_propBio = propBio;
}
