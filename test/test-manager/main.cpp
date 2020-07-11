#include <iostream>

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
  ImmunologyTest *immu = new ImmunologyTest();
  immu->SetPropertyA("propA");
  immu->SetPropertyB("propB");
  immu->SetPropertyImmu("propImmu");
  order.AddTestToOrder(immu);

  // Add operations to Immunology test
  Calculation *calc = new Calculation(immu);
  Calibration *cali = new Calibration(immu);
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
  BiochemistryTest *bio = new BiochemistryTest();
  bio->SetPropertyA("propA");
  bio->SetPropertyB("propB");
  bio->SetPropertyBio("propBio");
  order.AddTestToOrder(bio);

  // Add operations to Biology test
  Calculation *calcBio = new Calculation(bio);
  order.AddOperationToOrder(calcBio);

  // Add bio test
  HematologyTest *hema = new HematologyTest();
  hema->SetPropertyA("propA");
  hema->SetPropertyB("propB");
  hema->SetPropertyHema("propHema");
  order.AddTestToOrder(hema);

  // Add operations to Hematology test
  Calculation *calcHema = new Calculation(hema);
  order.AddOperationToOrder(calcHema);
  Calibration *calHema = new Calibration(hema);
  order.AddOperationToOrder(calHema);

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
