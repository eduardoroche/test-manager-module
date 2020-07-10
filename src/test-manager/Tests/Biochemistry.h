#include "ITest.h"

class Biochemistry : public ITest {
 public:
  Biochemistry();
  ~Biochemistry();

  void SetPropertyA(const int &propA) override;
  void SetPropertyB(const int &propB) override;
  void SetPropertyBio(const int &propBio);

 private:
  TestType m_type;
  int m_propA;
  int m_propB;
  int m_propBio;
};
