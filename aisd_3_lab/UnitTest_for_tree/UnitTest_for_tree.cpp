#include "pch.h"
#include "CppUnitTest.h"
#include "..\\aisd_3_lab\Classes Tree, Stack and Queue.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfortree
{
	TEST_CLASS(UnitTestfortree)
	{
	public:
		
        TEST_METHOD(Test_for_insert_element_for_tree)
        {
            tree a;
            a.insert(22);
            a.insert(25);
            a.insert(17);
            a.insert(20);

            Iterator* tree_iterator_queue = a.create_bft_iterator();
            Assert::IsTrue(tree_iterator_queue->next() == 22);
            Assert::IsTrue(tree_iterator_queue->next() == 17);
            Assert::IsTrue(tree_iterator_queue->next() == 25);
            Assert::IsTrue(tree_iterator_queue->next() == 20);
        }
        TEST_METHOD(Test_for_remove_element_without_tree_and_contains)
        {
            tree a;
            a.insert(22);
            a.insert(25);
            a.insert(17);
            a.insert(20);

            a.remove(22);

            Assert::IsTrue(a.contains(22) == false);

            a.remove(17);

            Assert::IsTrue(a.contains(20) == true);
            Assert::IsTrue(a.contains(17) == false);
            
            a.remove(25);
            try {
                a.remove(1);
            }
            catch (const invalid_argument error) {
                Assert::AreEqual("Element doesn't exist", error.what());
            }
            
        }
        TEST_METHOD(Test_DFT)
        {
            tree a;
            a.insert(22);
            a.insert(9);
            a.insert(23);
            a.insert(3);
            a.insert(24);
            a.insert(5);
            a.insert(13);
            a.insert(11);
            a.insert(15);
            a.insert(4);
            a.insert(6);
            a.remove(9);
            Iterator* tree_iterator_stack = a.create_dft_iterator();
            Assert::IsTrue(tree_iterator_stack->next() == 22);
            Assert::IsTrue(tree_iterator_stack->next() == 11);
            Assert::IsTrue(tree_iterator_stack->next() == 3);
            Assert::IsTrue(tree_iterator_stack->next() == 5);
            Assert::IsTrue(tree_iterator_stack->next() == 4);
            Assert::IsTrue(tree_iterator_stack->next() == 6);
            Assert::IsTrue(tree_iterator_stack->next() == 13);
            Assert::IsTrue(tree_iterator_stack->next() == 15);
            Assert::IsTrue(tree_iterator_stack->next() == 23);
            Assert::IsTrue(tree_iterator_stack->next() == 24);
            
        }
        TEST_METHOD(Test_BFT)
        {
            tree a;
            a.insert(22);
            a.insert(9);
            a.insert(23);
            a.insert(3);
            a.insert(24);
            a.insert(5);
            a.insert(13);
            a.insert(11);
            a.insert(15);
            a.insert(4);
            a.insert(6);
            a.remove(9);
            Iterator* tree_iterator_queue = a.create_bft_iterator();
            Assert::IsTrue(tree_iterator_queue->next() == 22);
            Assert::IsTrue(tree_iterator_queue->next() == 11);
            Assert::IsTrue(tree_iterator_queue->next() == 23);
            Assert::IsTrue(tree_iterator_queue->next() == 3);
            Assert::IsTrue(tree_iterator_queue->next() == 13);
            Assert::IsTrue(tree_iterator_queue->next() == 24);
            Assert::IsTrue(tree_iterator_queue->next() == 5);
            Assert::IsTrue(tree_iterator_queue->next() == 15);
            Assert::IsTrue(tree_iterator_queue->next() == 4);
            Assert::IsTrue(tree_iterator_queue->next() == 6);
        }
	};
}
