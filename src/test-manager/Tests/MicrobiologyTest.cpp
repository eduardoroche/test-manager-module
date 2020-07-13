#include "MicrobiologyTest.h"

#include <iostream>

MicrobiologyTest::MicrobiologyTest() {
  std::cout << "New Microbiology test created" << std::endl;
};
MicrobiologyTest::~MicrobiologyTest() {}

void MicrobiologyTest::accept(std::shared_ptr<IOperation> op) const {
  op->visit(this);
}

std::string MicrobiologyTest::GetPropertyA() const { return m_propA; }
std::string MicrobiologyTest::GetPropertyB() const { return m_propB; }
std::string MicrobiologyTest::GetPropertyMicro() const { return m_propMicro; }

void MicrobiologyTest::SetPropertyA(const std::string &propA) {
  m_propA = propA;
}

void MicrobiologyTest::SetPropertyB(const std::string &propB) {
  m_propB = propB;
}

void MicrobiologyTest::SetPropertyMicro(const std::string &propMicro) {
  m_propMicro = propMicro;
}
