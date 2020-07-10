#include "Immunology.h"

#include <iostream>
#include <string>

Immunology::Immunology() : m_type(TestType::IMMUNOLOGY){};
Immunology::~Immunology() {}

TestType Hematology::GetTestType() { return m_type; }

void Immunology::SetPropertyA(const int &propA) {
  std::cout << "Biochemistry set common test property A: "
            << std::to_string(propA) << std::endl;
  m_propA = propA;
}

void Immunology::SetPropertyB(const int &propB) {
  std::cout << "Biochemistry set common test property B: "
            << std::to_string(propB) << std::endl;
  m_propB = propB;
}

void Immunology::SetPropertyImmu(const int &propImmu) {
  std::cout << "Biochemistry set specific test property Bio: "
            << std::to_string(propImmu) << std::endl;
  m_propImmu = propImmu;
}
