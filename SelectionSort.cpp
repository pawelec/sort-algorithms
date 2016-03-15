#include "Algorithms.hpp"

namespace Algorithms {
	namespace Simple {
		void SelectionSort(int A[], int size) {
			int iMin,
				temp;
			
			for(int j = 0; j < size - 1; j++) {
				iMin = j;
				for(int i = j + 1; i < size; i++)
					if(A[i] < A[iMin])
						iMin = i;
				if(iMin != j) {
					temp = A[j];
					A[j] = A[iMin];
					A[iMin] =temp;
				}
			}
		}
	}
}