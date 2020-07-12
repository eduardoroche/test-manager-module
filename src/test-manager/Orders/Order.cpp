#include "Order.h"

Order::Order(const Sample &sample) : m_sample(sample) {}
Order::~Order() {}

void Order::AddOperationForTest(pTest test, pOperation op) {
  m_operations.push_back(std::make_tuple(test, op));
}

void Order::RunOperations() {
  for (auto op : m_operations) {
    std::get<0>(op)->accept(std::get<1>(op).get());
  }
}
