#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1/Lab 6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
    TEST_CLASS(UnitTest61)
    {
    public:

        TEST_METHOD(TestGenerateArray)
        {
            const int arraySize = 21;
            int b[arraySize];
            generateArray(b, arraySize);

            for (int i = 0; i < arraySize; ++i) {
                Assert::IsTrue(b[i] >= 10 && b[i] <= 90);
            }
        }

        TEST_METHOD(TestComputeCountAndSum)
        {
            const int arraySize = 21;
            int b[arraySize] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
            int count, sum;

            computeCountAndSum(b, arraySize, count, sum);

            Assert::AreEqual(count, 18);
            Assert::AreEqual(sum, 378);
        }
    };
}
