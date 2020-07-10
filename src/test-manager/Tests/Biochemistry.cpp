#include "Biochemistry.h"

#include <iostream>
#include <string>

Biochemistry::Biochemistry() : m_type(TestType::BIOCHEMISTRY){};
Biochemistry::~Biochemistry() {}

TestType Biochemistry::GetTestType() { return m_type; }

void Biochemistry::SetPropertyA(const int &propA) {
  std::cout << "Biochemistry set common test property A: "
            << std::to_string(propA) << std::endl;
  m_propA = propA;
}

void Biochemistry::SetPropertyB(const int &propB) {
  std::cout << "Biochemistry set common test property B: "
            << std::to_string(propB) << std::endl;
  m_propB = propB;
}

void Biochemistry::SetPropertyBio(const int &propBio) {
  std::cout << "Biochemistry set specific test property Bio: "
            << std::to_string(propBio) << std::endl;
  m_propBio = propBio;
}
