#include "Order.h"

Order::Order(const Sample &sample) : m_sample(sample) {}
Order::~Order() {}

void Order::AddTestToOrder(std::shared_ptr<ITest> test) {
  m_tests.push_back(test);
}

void Order::AddOperationToOrder(std::shared_ptr<IOperation> operation) {
  m_operations.push_back(operation);
}

void Order::RunOperations() {
  for (auto op : m_operations) {
    op->PerformOperation();
  }
}
