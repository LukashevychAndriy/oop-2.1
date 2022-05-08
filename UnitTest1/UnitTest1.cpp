#include "pch.h"
#include "CppUnitTest.h"
#include "../oop-lab-2.1/Point.h"
#include "../oop-lab-2.1/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point p(3, 4);
			double res = p.Distance();
			double shouldBe = 5;
			Assert::AreEqual(res, shouldBe);
		}
	};
}
