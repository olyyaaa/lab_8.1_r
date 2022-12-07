#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1_r/lab_8.1_r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
	TEST_CLASS(UnitTest81it)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a;
			a = main();
			Assert::AreEqual(a, 0);
		}
	};
}

