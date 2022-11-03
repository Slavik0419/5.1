#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(2, 1, 2);
			Assert::AreEqual(t, 1);
		}
	};
}
