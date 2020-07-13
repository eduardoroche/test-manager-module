#pragma once

#include <memory>
#include <vector>

#include "Operations/IOperation.h"
#include "Tests/ITest.h"

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

  void RunOperationsForTest(std::shared_ptr<ITest>,
                            std::shared_ptr<IOperation>);

 private:
  Sample m_sample;
};
