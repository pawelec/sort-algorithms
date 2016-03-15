#ifndef Algorithms_hpp
#define Algorithms_hpp

namespace Algorithms {
	namespace Simple {
		void SelectionSort(int A[], int size);
		void InsertionSort(int A[], int size);
	}
	namespace Efficient {
		namespace Quicksort {
			void Lomuto(int A[], int p, int r);
			void Hoare(int A[], int p, int r);
		}
		void Heapsort(int A[], int size);
	}
	namespace Bubble {
		void BubbleSort(int A[], int size);
	}
	namespace Distribution {
		void BucketSort(int A[], int size);
		void CountingSort(int A[], int size, int max);
	}
}

#endif