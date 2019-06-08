#include <list>
#include <iostream>
#include <cpp-unit-test/test-suite.h>

namespace CppUnitTest
{
    TestSuite::TestSuite() {
    }

    void TestSuite::addTestCase(TestCase* testCase) {
        this->testCaseList.push_back(testCase);
    }

    void TestSuite::printTotal() {
        int totalAsserts = 0;

        for (std::list<TestCase*>::iterator iTestCase = this->testCaseList.begin(); iTestCase != this->testCaseList.end(); ++iTestCase) {
            totalAsserts += (*iTestCase)->getAsserts();
        }

        std::cout << "Total TestCase: " << this->testCaseList.size() << std::endl;
        std::cout << "Total Assers: " << totalAsserts << std::endl;
    }
}
