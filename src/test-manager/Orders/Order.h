#pragma once

#include <memory>
#include <vector>

#include "Operations/Operation.h"
#include "Tests/Test.h"

// Sample definition should be located in a different module (i.e SampleModule)
// but for the sake of simplicity I will leave it here
struct Sample {
  int sampleId;
  std::string patientInfo;
};

class Order {
 public:
  Order(const Sample &sample);
  ~Order();

  typedef std::shared_ptr<Test> pTest;
  typedef std::shared_ptr<Operation> pOperation;

  void AddOperationForTest(pTest, pOperation);
  void RunOperations();

 private:
  Sample m_sample;
  std::vector<std::tuple<pTest, pOperation>> m_operations;
};
