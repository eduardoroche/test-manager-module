#include "Order.h"

#include <iostream>

Order::Order(const Sample &sample) : m_results(true), m_sample(sample) {}
Order::~Order() {}

void Order::AddOperationForTest(pTest test, pOperation op) {
  m_operations.push_back(std::make_tuple(test, op));
}

void Order::RunOperations() {
  for (auto op : m_operations) {
    if (!std::get<0>(op)->accept(std::get<1>(op).get())) {
      m_results = false;
    }
  }
}

bool Order::GetResults() const { return m_results; }
