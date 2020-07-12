#pragma once

#include "Operation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"
#include "Tests/ImmunologyTest.h"
#include "Tests/MicrobiologyTest.h"

class Calculation : public Operation {
 public:
  Calculation();
  ~Calculation();

  void visit(const BiochemistryTest *test) const override;
  void visit(const HematologyTest *test) const override;
  void visit(const ImmunologyTest *test) const override;
  void visit(const MicrobiologyTest *test) const override;

 private:
  void PerformOp(const BiochemistryTest *test) const;
  void PerformOp(const HematologyTest *test) const;
  void PerformOp(const ImmunologyTest *test) const;
  void PerformOp(const MicrobiologyTest *test) const;
};
