#include "pch.h"
#include "CppUnitTest.h"
#include "..\number-tools\numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NumberTestProject
{
	TEST_CLASS(NumberTestProject)
	{
	public:
		
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{ 
			bool result;
			int argument = 17;
			result = isNumberInRange(17);
			Assert::AreEqual(true, result);
		}
	};
}
