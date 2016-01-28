#include "stdafx.h"
#include "CppUnitTest.h"
#include "Core.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace Tests
{
    TEST_CLASS(FizzBuzzTests)
    {
    public:

        TEST_METHOD(Should_return_number_as_string)
        {
            Assert::AreEqual(string("1"), FizzBuzz(1), L"1 should render as '1'", LINE_INFO());
            Assert::AreEqual(string("2"), FizzBuzz(2), L"2 should render as '2'", LINE_INFO());
            Assert::AreEqual(string("11"), FizzBuzz(11), L"11 should render as '11'", LINE_INFO());
        }

        TEST_METHOD(Should_return_fizz_if_number_is_divisible_by_3)
        {
            Assert::AreEqual(string("fizz"), FizzBuzz(3), L"3 should render as 'fizz'", LINE_INFO());
            Assert::AreEqual(string("fizz"), FizzBuzz(6), L"6 should render as 'fizz'", LINE_INFO());
            Assert::AreEqual(string("fizz"), FizzBuzz(33), L"33 should render as 'fizz'", LINE_INFO());
        }

        TEST_METHOD(Should_return_buzz_if_number_is_divisible_by_5)
        {
            Assert::AreEqual(string("buzz"), FizzBuzz(5), L"5 should render as 'buzz'", LINE_INFO());
            Assert::AreEqual(string("buzz"), FizzBuzz(10), L"10 should render as 'buzz'", LINE_INFO());
            Assert::AreEqual(string("buzz"), FizzBuzz(25), L"25 should render as 'buzz'", LINE_INFO());
        }

        TEST_METHOD(Should_return_fizzbuzz_if_number_is_divisible_by_3_and_5)
        {
            Assert::AreEqual(string("fizzbuzz"), FizzBuzz(3*5), L"15 should render as 'fizzbuzz'", LINE_INFO());
        }
    };
}