#ifndef CPP_UNIT_TEST_SUITE_H
#define CPP_UNIT_TEST_SUITE_H

#include <list>
#include <iostream>
#include <cpp-unit-test/test-case.h>

namespace CppUnitTest
{
    class TestSuite
    {
    public:
        TestSuite();

        void addTestCase(TestCase* testCase);

        void printTotal();

    private:
        std::list<TestCase*> testCaseList;
    };
}

#endif /* CPP_UNIT_TEST_SUITE_H */
