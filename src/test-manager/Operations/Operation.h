#pragma once

class BiochemistryTest;
class HematologyTest;
class ImmunologyTest;
class MicrobiologyTest;

class Operation {
 public:
  virtual bool visit(const BiochemistryTest *test) const = 0;
  virtual bool visit(const HematologyTest *test) const = 0;
  virtual bool visit(const MicrobiologyTest *test) const = 0;
  virtual bool visit(const ImmunologyTest *test) const = 0;
};
