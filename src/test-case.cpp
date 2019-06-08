#include <list>
#include <iostream>
#include <cpp-unit-test/test-case.h>

namespace CppUnitTest
{
    TestCase::TestCase(const char* name)
    {
        this->name = (char*) name;
        this->asserts = 0;
    }

    void TestCase::increment()
    {
        this->asserts++;
        std::cout << ".";
    }

    char* TestCase::getName()
    {
        return this->name;
    }

    int TestCase::getAsserts()
    {
        return this->asserts;
    }

    void TestCase::printTitle() {
        std::cout << "TestCase: " << this->name << std::endl;
    }

    void TestCase::finish() {
        std::cout << std::endl;
        std::cout << "Total asserts: " << this->asserts << std::endl;
        std::cout << std::endl;
    }
}
