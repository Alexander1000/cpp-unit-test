#ifndef CPP_UNIT_TEST_ASSERTS_H
#define CPP_UNIT_TEST_ASSERTS_H

#include <string>

namespace CppUnitTest
{
    void assertEquals(TestCase *testCase, std::string str1, std::string str2);

    void assertEquals(TestCase *testCase, std::string *str1, std::string str2);

    void assertEquals(TestCase *testCase, std::string str1, std::string *str2);

    void assertEquals(TestCase *testCase, int expected, int actual);

    void assertTrue(TestCase *testCase, bool actual);

    void assertFalse(TestCase *testCase, bool actual);
}

#endif // CPP_UNIT_TEST_ASSERTS_H
