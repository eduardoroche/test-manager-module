#include "HematologyTest.h"

#include <iostream>

HematologyTest::HematologyTest() {
  std::cout << "New Hematology test created" << std::endl;
};
HematologyTest::~HematologyTest() {}

void HematologyTest::accept(std::shared_ptr<IOperation> op) const {
  op->visit(this);
}

std::string HematologyTest::GetPropertyA() const { return m_propA; }
std::string HematologyTest::GetPropertyB() const { return m_propB; }
std::string HematologyTest::GetPropertyHema() const { return m_propHema; }

void HematologyTest::SetPropertyA(const std::string &propA) { m_propA = propA; }

void HematologyTest::SetPropertyB(const std::string &propB) { m_propB = propB; }

void HematologyTest::SetPropertyHema(const std::string &propHema) {
  m_propHema = propHema;
}
