#include "Algorithms.hpp"

namespace Algorithms {
	namespace Efficient {
		void Max_Heapify(int A[], int size, int i) {
			int l = 2*i,
				r = (2*i) + 1,
				largest,
				temp;
			
			if(l < size && A[l] > A[i])
				largest = l;
			else
				largest = i;
			
			if(r < size && A[r] > A[largest])
				largest = r;
			
			if(largest != i) {
				temp = A[largest];
				A[largest] = A[i];
				A[i] = temp;
				Max_Heapify(A, size, largest);
			}
		}
		void Build_Max_Heap(int A[], int size) {
			for(int i = (size - 1) / 2; i >= 0; i--)
				Max_Heapify(A, size, i);
		}
		void Heapsort(int A[], int size) {
			int temp;
			
			Build_Max_Heap(A, size);
			for(int i = size - 1; i >= 1; i--) {
					temp = A[i];
					A[i] = A[0];
					A[0] = temp;
					size--;
					Max_Heapify(A, size, 0);
			}
		}
		
	}
}