#include "Test.h"

void IO_RedirectionTestCase::testConstructor() {

  IO_Redirection redirect("Start", 0);

  std::string process_name = redirect.getProcessName();
  int time = redirect.getTimeinMilliseconds();

  CPPUNIT_ASSERT(process_name == "Start");

  CPPUNIT_ASSERT(time == 0);
}

CppUnit::Test *IO_redirectionTestCase::suite () {

  CppUnit::TestSuite *suiteOfTests =
  new CppUnit::TestSuite("IO_RedirectionTestCase");

  suiteofTests->addTest
  (new CppUnit::TestCaller<IO_RedirectionTestCase>
  ("testConstructor", &IO_redirectionTestCase::testConstructor));
  (new CppUnit::TestCaller<IO_RedirectionTestCase>
  ("testGetProcessName",
  &IO_redirectionTestCase::testGetProcessName));
  (new CppUnit::TestCaller<IO_RedirectionTestCase>
  ("testGetTimeInMilliseconds",
  &IO_redirectionTestCase::testGetTimeinMilliseconds));
  return suiteOfTests;
}

int main() {
  CppUnit::TextUi::TestRunner runner;
  runner.addTest(IO_redirectionTestCase::suite());
  runner.run();
  return 0;
}
