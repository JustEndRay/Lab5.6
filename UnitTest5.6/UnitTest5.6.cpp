#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.6/Lab5.6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest56
{
	TEST_CLASS(UnitTest56)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = pryklad(5, 6,7);
			Assert::AreEqual(t, 12);

		}
	};
}
