#include <iostream>
#include <memory>

#include "Operations/Calculation.h"
#include "Operations/Calibration.h"
#include "Operations/IOperation.h"
#include "Orders/Order.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"
#include "Tests/ImmunologyTest.h"
#include "Tests/MicrobiologyTest.h"

void OrderWithOneTest(const Sample &sample) {
  std::cout << "** OrderWithOneTest **" << std::endl << std::endl;

  // Create order
  Order order(sample);

  // Add immu test
  std::shared_ptr<ImmunologyTest> immu = std::make_shared<ImmunologyTest>();
  immu->SetPropertyA("A");
  immu->SetPropertyB("B");
  immu->SetPropertyImmu("Immu");
  order.AddTestToOrder(immu);

  // Add operations to Immunology test
  std::shared_ptr<Calculation> calc = std::make_shared<Calculation>(immu);
  std::shared_ptr<Calibration> cali = std::make_shared<Calibration>(immu);
  order.AddOperationToOrder(calc);
  order.AddOperationToOrder(cali);

  // Run order
  std::cout << "Running order operations:" << std::endl;
  order.RunOperations();
}

void OrderWithTwoTest(const Sample &sample) {
  std::cout << std::endl << "** OrderWithTwoTest **" << std::endl << std::endl;

  // Create order
  Order order(sample);

  // Add bio test
  std::shared_ptr<BiochemistryTest> bio = std::make_shared<BiochemistryTest>();
  bio->SetPropertyA("A");
  bio->SetPropertyB("B");
  bio->SetPropertyBio("Bio");
  order.AddTestToOrder(bio);

  // Add operations to Biology test

  std::shared_ptr<Calculation> calcBio = std::make_shared<Calculation>(bio);
  order.AddOperationToOrder(calcBio);

  // Add bio test
  std::shared_ptr<HematologyTest> hema = std::make_shared<HematologyTest>();
  hema->SetPropertyA("A2");
  hema->SetPropertyB("B2");
  hema->SetPropertyHema("Hema");
  order.AddTestToOrder(hema);

  // Add operations to Hematology test
  std::shared_ptr<Calculation> calcHema = std::make_shared<Calculation>(hema);
  order.AddOperationToOrder(calcHema);
  std::shared_ptr<Calibration> calibHema = std::make_shared<Calibration>(hema);
  order.AddOperationToOrder(calibHema);

  // Run order
  std::cout << "Running order operations:" << std::endl;
  order.RunOperations();
}

int main() {
  Sample sample;
  sample.sampleId = 123;
  sample.lisNumber = 456;
  sample.patientInfo = "Pepe";

  OrderWithOneTest(sample);
  OrderWithTwoTest(sample);
}
