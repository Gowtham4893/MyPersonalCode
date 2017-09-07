/**
 * @gowtham
 * \file BubbleSort.c
 * \date 6-sep-2017
 *  \brief
 *  This file will have definition for the bubblesort function.
 */

#include "BubbleSort.h"

void fnSortArrayInAccendingOrderBubbleSort(int ArrayOfElements[], int NumberOfElements){

	int i,j;
	int tmp = 0;

	for(i = 0; i < NumberOfElements-1; i++){
		for(j = 0; j<(NumberOfElements-i)-1; j++ ){

			if(ArrayOfElements[j] > ArrayOfElements[j+1]){

				tmp = ArrayOfElements[j];
				ArrayOfElements[j] = ArrayOfElements[j+1];
				ArrayOfElements[j+1] = tmp;

			}

		}

	}
}



