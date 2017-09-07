#include "CommandLineTestRunner.h"
#include "TestHarness_c.h"

extern "C"
{
#include "BubbleSort.h"
}

TEST_GROUP(BubbleSort){
};

/**
 * @gowtam
 * \fn TEST(BubbleSort, tst_fnSortArrayInAccendingOrderBubbleSort)
 * \test
 *   1. Take an array of integers which are not sorted.
 *   2. Call the API fnSortArrayInAccendingOrderBubbleSort()
 *   3. Check the same array that whether all the elements are sorted or not.
 *
 */
TEST(BubbleSort, tst_fnSortArrayInAccendingOrderBubbleSort)
{
   int ArrayOfIntigers[] = {12,1,9,13,6};
   int NoOfElements = 5;

   fnSortArrayInAccendingOrderBubbleSort(ArrayOfIntigers, NoOfElements);

   CHECK_EQUAL(1,ArrayOfIntigers[0]);
   CHECK_EQUAL(6,ArrayOfIntigers[1]);
   CHECK_EQUAL(9,ArrayOfIntigers[2]);
   CHECK_EQUAL(12,ArrayOfIntigers[3]);
   CHECK_EQUAL(13,ArrayOfIntigers[4]);

   FAIL("DONE: tst_fnSortArrayInAccendingOrderBubbleSort ");
}
