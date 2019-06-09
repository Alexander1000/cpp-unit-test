#include <cpp-unit-test/test-case.h>
#include <cpp-unit-test/asserts.h>
#include <cpp-unit-test/exceptions.h>
#include <string>

namespace CppUnitTest
{
    void assertEquals(TestCase *testCase, std::string str1, std::string str2)
    {
        testCase->increment();
        if (str1.compare(str2) != 0) {
            throw new AssertEqualsException;
        }
    }

    void assertEquals(TestCase *testCase, std::string *str1, std::string str2)
    {
        testCase->increment();
        if (str1->compare(str2) != 0) {
            throw new AssertEqualsException;
        }
    }

    void assertEquals(TestCase *testCase, std::string str1, std::string *str2)
    {
        testCase->increment();
        if (str1.compare(*str2) != 0) {
            throw new AssertEqualsException;
        }
    }

    void assertEquals(TestCase *testCase, int expected, int actual)
    {
        testCase->increment();
        if (expected != actual) {
            throw new AssertEqualsException;
        }
    }

    void assertEquals(TestCase *testCase, std::string* expected, char* actual)
    {
        testCase->increment();
        if (expected->compare(actual)) {
            throw new AssertEqualsException;
        }
    }

    void assertEquals(TestCase *testCase, const char expected, char actual)
    {
        testCase->increment();
        if (expected != actual) {
            throw new AssertEqualsException;
        }
    }

    void assertTrue(TestCase *testCase, bool actual)
    {
        testCase->increment();
        if (!actual) {
            throw new AssertTrueException;
        }
    }

    void assertFalse(TestCase *testCase, bool actual)
    {
        testCase->increment();
        if (actual) {
            throw new AssertFalseException;
        }
    }

    void assertNotNull(TestCase* t, char* symbol)
    {
        t->increment();
        if (symbol == NULL) {
            throw new AssertNotNullException;
        }
    }
} // CppUnitTest
