#include "Algorithms.hpp"

namespace Algorithms {
	namespace Efficient {
		namespace Quicksort {
				int PartitionLomuto(int A[], int p, int r) {
					int x = A[r],
						i = p - 1,
						temp;
						
					for(int j = p; j <= r - 1; j++)
						if(A[j] <= x) {
							i++;
							temp = A[i];
							A[i] = A[j];
							A[j] = temp;
						}
					temp = A[i + 1];
					A[i + 1] = A[r];
					A[r] = temp;
					return i + 1;
				}
				void Lomuto(int A[], int p, int r) {
					if(p < r) {
						int q = PartitionLomuto(A, p, r);
						Lomuto(A, p, q - 1);
						Lomuto(A, q + 1, r);
					}
				}
				int PartitionHoare(int A[], int p, int r) {
					int x = A[p],
						i = p,
						j = r,
						temp;
						
					while(true) {
						while(A[j] > x)
							j--;
						while(A[i] < x)
							i++;
						if(i < j) {
							temp = A[i]; 
							A[i] = A[j];
							A[j] = temp;
							i++;
							j--;
						}
						else
							return j;
					}
				}
				void Hoare(int A[], int p, int r) {
					if(p < r) {
						int q = PartitionHoare(A, p, r);
						Hoare(A, p, q);
						Hoare(A, q + 1, r);
					}
				}
			}
	}
}