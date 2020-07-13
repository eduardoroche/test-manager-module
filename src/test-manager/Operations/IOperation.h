#pragma once

class BiochemistryTest;
class HematologyTest;
class ImmunologyTest;
class MicrobiologyTest;

class IOperation {
 public:
  IOperation() = default;
  ~IOperation() = default;

  virtual void Visit(const BiochemistryTest *test) const = 0;
  virtual void Visit(const HematologyTest *test) const = 0;
  virtual void Visit(const MicrobiologyTest *test) const = 0;
  virtual void Visit(const ImmunologyTest *test) const = 0;
};
