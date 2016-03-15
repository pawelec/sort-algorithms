#include "Algorithms.hpp"

namespace Algorithms {
	namespace Distribution {
		void BucketSort(int A[], int size) {
			int *buckets = new int[size];
			
			for(int i = 0; i < size; i++)
				buckets[i] = 0;
			
			for(int i = 0; i < size; i++)
				(buckets[A[i]])++;
			
			for(int i = 0, j = 0; i < size; i++)
				for( ; buckets[i] > 0; (buckets[i])--)
					A[j++] = i;

			delete[] buckets;
		}
	}
}