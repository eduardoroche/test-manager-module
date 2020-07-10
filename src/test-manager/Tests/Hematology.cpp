#include "Hematology.h"

#include <iostream>
#include <string>

Hematology::Hematology() : m_type(TestType::HEMATOLOGY){};
Hematology::~Hematology() {}

TestType Hematology::GetTestType() { return m_type; }

void Hematology::SetPropertyA(const int &propA) {
  std::cout << "Hematology set common test property A: "
            << std::to_string(propA) << std::endl;
  m_propA = propA;
}

void Hematology::SetPropertyB(const int &propB) {
  std::cout << "Hematology set common test property B: "
            << std::to_string(propB) << std::endl;
  m_propB = propB;
}

void Hematology::SetPropertyHema(const int &propHema) {
  std::cout << "Hematology set specific test property Bio: "
            << std::to_string(propHema) << std::endl;
  m_propHema = propHema;
}
