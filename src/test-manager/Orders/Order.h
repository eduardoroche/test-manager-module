#pragma once

#include <memory>
#include <vector>

#include "Operations/IOperation.h"
#include "Tests/ITest.h"

// Sample definition should be located in a different module (i.e SampleModule)
// but for the sake of simplicity I will leave it here
struct Sample {
  int sampleId;
  int lisNumber;
  std::string patientInfo;
};

class Order {
 public:
  Order(const Sample &sample);
  ~Order();

  void AddTestToOrder(std::shared_ptr<ITest> test);
  void AddOperationToOrder(std::shared_ptr<IOperation> operation);
  void RunOperations();

 private:
  Sample m_sample;
  std::vector<std::shared_ptr<ITest>> m_tests;
  std::vector<std::shared_ptr<IOperation>> m_operations;
};
