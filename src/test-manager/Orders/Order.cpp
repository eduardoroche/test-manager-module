#include "Order.h"

#include <iostream>

Order::Order(const Sample &sample) : m_sample(sample) {}
Order::~Order() {}

void Order::RunOperationsForTest(std::shared_ptr<ITest> op,
                                 std::shared_ptr<IOperation> test) {
  op->accept(test.get());
}
