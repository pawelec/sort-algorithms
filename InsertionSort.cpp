#include "Algorithms.hpp"

namespace Algorithms {
	namespace Simple {
		void InsertionSort(int A[], int size) {
			int j,
				temp;
			
			for(int i = 1; i < size; i++) {
				j = i;
				while(j > 0 && A[j-1] > A[j]) {
					temp = A[j];
					A[j] = A[j - 1];
					A[j - 1] = temp;
					j--;
				}
			}
		}
	}
}