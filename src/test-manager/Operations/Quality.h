#pragma once

#include "IOperation.h"
#include "Tests/BiochemistryTest.h"
#include "Tests/HematologyTest.h"
#include "Tests/ImmunologyTest.h"
#include "Tests/MicrobiologyTest.h"

class Quality : public IOperation {
 public:
  Quality();
  ~Quality();

  void Visit(const BiochemistryTest *test) const override;
  void Visit(const HematologyTest *test) const override;
  void Visit(const ImmunologyTest *test) const override;
  void Visit(const MicrobiologyTest *test) const override;
};
