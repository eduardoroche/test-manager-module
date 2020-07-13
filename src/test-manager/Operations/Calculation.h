#pragma once

#include "IOperation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"
#include "Tests/ImmunologyTest.h"
#include "Tests/MicrobiologyTest.h"

class Calculation : public IOperation {
 public:
  Calculation();
  ~Calculation();

  void visit(const BiochemistryTest *test) const override;
  void visit(const HematologyTest *test) const override;
  void visit(const ImmunologyTest *test) const override;
  void visit(const MicrobiologyTest *test) const override;
};
