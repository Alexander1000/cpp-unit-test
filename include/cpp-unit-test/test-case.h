#ifndef CPP_UNIT_TEST_CASE_H
#define CPP_UNIT_TEST_CASE_H

#include <list>
#include <iostream>

namespace CppUnitTest
{
    class TestCase
    {
    public:
        TestCase(const char* name);

        void increment();

        char* getName();

        int getAsserts();

        void printTitle();

        void finish();

    private:
        char* name;
        int asserts;
    };
}

#endif /* CPP_UNIT_TEST_CASE_H */
