#include "CppUnitTest.h"
#include "..\mylibcpp\mydata.h"
#include "..\mylibcpp\myqueue.h"
#include "..\mylibcpp\mystack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace mylibcpptest
{
	TEST_CLASS(mylibcppteststack)
	{
	public:
		
		TEST_METHOD(TestStackPushWorking)
		{

			MyStack* stack = new MyStack();
			
			//init stack..

			Data* dataStored = new Data();
			Data* dataRestored = 0;

			dataStored->value = new char[12] {"Hello"};
			dataStored->key = 100;

			push(stack, dataStored);
			
			dataRestored = pop(stack);
			
			Assert::AreEqual(dataRestored->key, dataStored->key);
			Assert::AreEqual(dataRestored->value, dataStored->value);

			delete[] dataStored->value;
			delete dataStored;
		}

		TEST_METHOD(TestStackPopWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestStackTopWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestStackBottomWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestStackLengthWorking)
		{
			Assert::IsTrue(0);
		}

	};

	TEST_CLASS(mylibcpptestqueue)
	{
	public:

		TEST_METHOD(TestQueueEnqueueWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestQueueDequeueWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestQueueFrontWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestQueueBackWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestQueueLengthWorking)
		{
			Assert::IsTrue(0);
		}
	};

	TEST_CLASS(mylibcpptestsparsematrix)
	{
	public:

		TEST_METHOD(TestSparseMatrixInsertWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestSparseMatrixGetWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestSparseMatrixDeleteWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestSparseMatrixCopyWorking)
		{
			Assert::IsTrue(0);
		}

		TEST_METHOD(TestSparseMatrixDestroyWorking)
		{
			Assert::IsTrue(0);
		}
	};
}
