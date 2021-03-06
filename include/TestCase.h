#ifndef CUMINI_TESTCASE_H
#define CUMINI_TESTCASE_H

#include "TestFixture.h"
#include "TestLeaf.h"

namespace CUMINI {

class TestResult;

class TestCase : public TestLeaf, public TestFixture {
public:
  TestCase(const std::string &name = "");

  ~TestCase();

  virtual void run(TestResult *result);

  virtual void runTest() = 0;

  std::string getName() const;

private:
  TestCase(const TestCase &another);
  TestCase &operator=(const TestCase &another);

private:
  const std::string name;
};

} // namespace CUMINI

#endif
