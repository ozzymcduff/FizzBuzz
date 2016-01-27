#include "stdafx.h"
#include "CppUnitTest.h"
#include "Core.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
    TEST_CLASS(FizzBuzzTests)
    {
    public:

        TEST_METHOD(Should_return_1_from_1)
        {
            Assert::AreEqual(L"1", FizzBuzz(1), L"message", LINE_INFO());
        }

    };
}