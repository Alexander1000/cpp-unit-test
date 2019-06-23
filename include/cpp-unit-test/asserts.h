#ifndef CPP_UNIT_TEST_ASSERTS_H
#define CPP_UNIT_TEST_ASSERTS_H

#include <string>
#include <cpp-unit-test/test-case.h>

namespace CppUnitTest
{
    void assertEquals(TestCase *testCase, std::string str1, std::string str2);

    void assertEquals(TestCase *testCase, std::string *str1, std::string str2);

    void assertEquals(TestCase *testCase, std::string str1, std::string *str2);

    void assertEquals(TestCase *testCase, int expected, int actual);

    void assertEquals(TestCase *testCase, std::string* expected, char* actual);

    void assertEquals(TestCase *testCase, const char expected, char actual);

    void assertTrue(TestCase *testCase, bool actual);

    void assertFalse(TestCase *testCase, bool actual);

    void assertNotNull(TestCase*, char*);

    void assertNull(TestCase*, char*);
}

#endif // CPP_UNIT_TEST_ASSERTS_H
