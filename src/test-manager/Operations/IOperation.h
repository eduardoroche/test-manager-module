#pragma once

class BiochemistryTest;
class HematologyTest;
class ImmunologyTest;
class MicrobiologyTest;

class IOperation {
 public:
  IOperation() = default;
  ~IOperation() = default;

  virtual void visit(const BiochemistryTest *test) const = 0;
  virtual void visit(const HematologyTest *test) const = 0;
  virtual void visit(const MicrobiologyTest *test) const = 0;
  virtual void visit(const ImmunologyTest *test) const = 0;
};
