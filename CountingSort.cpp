#include "Algorithms.hpp"

namespace Algorithms {
	namespace Distribution {
		void CountingSort(int A[], int size, int max) {
			int *counting = new int[max];
			int k = 0;
			
			for(int i = 0; i < max; i++)
				counting[i] = 0;
			
			for(int i = 0; i < size; i++)
				counting[A[i]]++;
			
			for(int i = 0; i < max; i++) {
				int count = counting[i];
				for(int j = 0; j < count; j++) {
					A[k] = i;
					k++;
				}
			}
		}
	}
}