#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			CryptoHash *testCryptoHash;
			testCryptoHash = new CryptoHash();

			//Assert::AreEqual(0, (int)(void*)testCryptoHash);

			delete testCryptoHash;
			Assert::AreNotEqual(1, 0);
			//open_store
			//	CertCloseStore
		}

	};
}