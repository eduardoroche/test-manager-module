#include "HematologyTest.h"

#include <iostream>
#include <string>

HematologyTest::HematologyTest() {
  std::cout << "New Hematology test created" << std::endl;
};
HematologyTest::~HematologyTest() {}

void HematologyTest::accept(Operation *op) const { op->visit(this); }

std::string HematologyTest::GetPropertyA() { return m_propA; }
std::string HematologyTest::GetPropertyB() { return m_propB; }
std::string HematologyTest::GetPropertyHema() { return m_propHema; }

void HematologyTest::SetPropertyA(const std::string &propA) { m_propA = propA; }

void HematologyTest::SetPropertyB(const std::string &propB) { m_propB = propB; }

void HematologyTest::SetPropertyHema(const std::string &propHema) {
  m_propHema = propHema;
}
