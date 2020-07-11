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

int main() {
  Sample sample;
  sample.sampleId = 123;
  sample.lisNumber = 456;
  sample.patientInfo = "Pepe";

  Order order(sample);

  ImmunologyTest *immu = new ImmunologyTest();
  immu->SetPropertyA("propA");
  immu->SetPropertyB("propB");
  immu->SetPropertyImmu("propImmu");

  order.AddTestToOrder(immu);

  Calculation *calc = new Calculation(immu);
  order.AddOperationToOrder(calc);
  order.RunOperations();
}
