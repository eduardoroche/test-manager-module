#pragma once

#include "Operation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"
#include "Tests/ImmunologyTest.h"
#include "Tests/MicrobiologyTest.h"

class Quality : public Operation {
 public:
  Quality();
  ~Quality();

  bool visit(const BiochemistryTest *test) const override;
  bool visit(const HematologyTest *test) const override;
  bool visit(const MicrobiologyTest *test) const override;
  bool visit(const ImmunologyTest *test) const override;

 private:
  bool PerformOp(const BiochemistryTest *test) const;
  bool PerformOp(const HematologyTest *test) const;
  bool PerformOp(const MicrobiologyTest *test) const;
  bool PerformOp(const ImmunologyTest *test) const;
};
