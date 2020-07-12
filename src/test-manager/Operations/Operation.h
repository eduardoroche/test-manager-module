#pragma once

class BiochemistryTest;
class HematologyTest;

class Operation {
 public:
  virtual void visit(const BiochemistryTest *test) const = 0;
  virtual void visit(const HematologyTest *test) const = 0;
};
