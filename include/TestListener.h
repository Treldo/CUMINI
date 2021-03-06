#ifndef CUMINI_TESTLISTENER_H
#define CUMINI_TESTLISTENER_H

namespace CUMINI {

class TestFailure;

class TestListener {
public:
  virtual ~TestListener() = default;

  virtual void addRunTest() = 0;
  virtual void addFailure(const TestFailure &) = 0;
};

} // namespace CUMINI

#endif
