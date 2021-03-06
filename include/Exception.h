#ifndef CUMINI_TESTEXCEPTION_H
#define CUMINI_TESTEXCEPTION_H

#include <exception>
#include <string>

namespace CUMINI {

class Exception : public std::exception {
public:
  Exception(std::string message, long lineNumber = -1,
            std::string fileName = "");

  Exception(const Exception &another);

  ~Exception() throw();

  Exception &operator=(const Exception &another);

  std::string message() const;

  long lineNumber() const;

  std::string fileName() const;

  Exception *clone() const;

protected:
  std::string m_message;
  long m_lineNumber;
  std::string m_fileName;
};

} // namespace CUMINI

#endif
