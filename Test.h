#ifndef Test_h
#define Test_h
#include <iostream>
#include <string>

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <cppunit/ui/text/TestRunner.h>

#include "IO_Redirection.h"

class IO_RedirectionTestCase : public CppUnit::TestCase {

public:

  IO_RedirectionTestCase() {}
  IO_RedirectionTestCase(std::string process) : CppUnit::TestCase(process) {}

  void testConstructor();

  void testGetProcessName();

  void testGetTimeInMilliseconds();

  static CppUnit::Test *suite ();
};
#endif
