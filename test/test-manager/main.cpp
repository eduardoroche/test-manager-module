#include <iostream>
#include <memory>

#include "Operations/Calculation.h"
#include "Operations/Calibration.h"
#include "Orders/Order.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"

void OrderWithOneTest(const Sample &sample) {
  std::cout << "** OrderWithOneTest **" << std::endl << std::endl;

  // Create order
  Order order(sample);

  // Create bio test
  std::shared_ptr<BiochemistryTest> bio = std::make_shared<BiochemistryTest>();
  bio->SetPropertyA("A");
  bio->SetPropertyB("B");
  bio->SetPropertyBio("Bio");

  // Add calculation to Biochemistry test
  std::shared_ptr<Calculation> calcul = std::make_shared<Calculation>();
  order.AddOperationForTest(bio, calcul);

  // Add calibration to Biochemistry test
  std::shared_ptr<Calibration> cali = std::make_shared<Calibration>();
  order.AddOperationForTest(bio, cali);

  // Run order
  std::cout << "Running order operations!" << std::endl;
  order.RunOperations();
}

// void OrderWithTwoTest(const Sample &sample) {
//  std::cout << std::endl << "** OrderWithTwoTest **" << std::endl <<
//  std::endl;

//  // Create order
//  Order order(sample);

//  // Add bio test
//  std::shared_ptr<BiochemistryTest> bio =
//  std::make_shared<BiochemistryTest>(); bio->SetPropertyA("A");
//  bio->SetPropertyB("B");
//  bio->SetPropertyBio("Bio");
//  order.AddTestToOrder(bio);

//  // Add operations to Biology test

//  std::shared_ptr<Calculation> calcBio = std::make_shared<Calculation>(bio);
//  order.AddOperationToOrder(calcBio);

//  // Add bio test
//  std::shared_ptr<HematologyTest> hema = std::make_shared<HematologyTest>();
//  hema->SetPropertyA("A2");
//  hema->SetPropertyB("B2");
//  hema->SetPropertyHema("Hema");
//  order.AddTestToOrder(hema);

//  // Add operations to Hematology test
//  std::shared_ptr<Calculation> calcHema = std::make_shared<Calculation>(hema);
//  order.AddOperationToOrder(calcHema);
//  std::shared_ptr<Calibration> calibHema =
//  std::make_shared<Calibration>(hema); order.AddOperationToOrder(calibHema);

//  // Run order
//  std::cout << "Running order operations:" << std::endl;
//  order.RunOperations();
//}

int main() {
  Sample sample;
  sample.sampleId = 123;
  sample.patientInfo = "Pepe";

  OrderWithOneTest(sample);
  //  OrderWithTwoTest(sample);
}
