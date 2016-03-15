#include "Algorithms.hpp"

namespace Algorithms {
	namespace Bubble {
		void BubbleSort(int A[], int size) {
			bool swapped = true;
			int j = 0, temp;
			
			while(swapped) {
				swapped = false;
				j++;
				for(int i = 0; i < size - j; i++)
					if(A[i] > A[i + 1]) {
						temp = A[i];
						A[i] = A[i + 1];
						A[i + 1] = temp;
						swapped = true;
					}
			}
		}
	}
}