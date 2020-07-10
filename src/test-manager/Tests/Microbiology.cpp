#include "Microbiology.h"

#include <iostream>
#include <string>

Microbiology::Microbiology() : m_type(TestType::MICROBIOLOGY){};
Microbiology::~Microbiology() {}

TestType Microbiology::GetTestType() { return m_type; }

void Microbiology::SetPropertyA(const int &propA) {
  std::cout << "Biochemistry set common test property A: "
            << std::to_string(propA) << std::endl;
  m_propA = propA;
}

void Microbiology::SetPropertyB(const int &propB) {
  std::cout << "Biochemistry set common test property B: "
            << std::to_string(propB) << std::endl;
  m_propB = propB;
}

void Microbiology::SetPropertyMicro(const int &propMicro) {
  std::cout << "Biochemistry set specific test property Bio: "
            << std::to_string(propMicro) << std::endl;
  m_propMicro = propMicro;
}
