#include "BiochemistryTest.h"

#include <iostream>

BiochemistryTest::BiochemistryTest() {
  std::cout << "New Biochemistry test created" << std::endl;
};
BiochemistryTest::~BiochemistryTest() {}

void BiochemistryTest::Accept(std::shared_ptr<IOperation> op) const {
  op->Visit(this);
}

std::string BiochemistryTest::GetPropertyA() const { return m_propA; }
std::string BiochemistryTest::GetPropertyB() const { return m_propB; }
std::string BiochemistryTest::GetPropertyBio() const { return m_propBio; }

void BiochemistryTest::SetPropertyA(const std::string &propA) {
  m_propA = propA;
}

void BiochemistryTest::SetPropertyB(const std::string &propB) {
  m_propB = propB;
}

void BiochemistryTest::SetPropertyBio(const std::string &propBio) {
  m_propBio = propBio;
}
