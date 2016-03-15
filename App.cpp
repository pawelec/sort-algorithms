#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Algorithms.hpp"
using namespace std;

void InitArrays(int asc[], int desc[], int random[], int size);
void DisplayArrays(int asc[], int desc[], int random[], int size);
inline double  ElapsedSec(clock_t begin, clock_t end);

enum Option {
	Exit = 0, InsertionSort, SelectionSort, Heapsort, QuicksortLomuto, QuicksortHoare, BubbleSort, CountingSort, BucketSort
};
void DrawMenu() {
	cout << endl << 
	"-> Simple:\n" <<
		"\t1. Insertion sort\n" <<
		"\t2. Selection sort\n" <<
	"-> Efficiet:\n" << 
		"\t3. Heapsort\n" <<
		"\t4. Quicksort - Lomuto\n" <<
		"\t5. Quicksort - Hoare\n" <<
	"-> Bubble:\n" << 
		"\t6. Bubble sort\n"
	"-> Distribution:\n" <<
		"\t7. Counting sort\n" <<
		"\t8. Bucket sort\n" <<
	"-> 0 - Exit\n" << 
	"->";
}
int main() {
	int const arraySize = 200000;
	
	int *ascending = new int[arraySize],
		*descending = new int[arraySize],
		*random = new int[arraySize];
	
	InitArrays(ascending, descending, random, arraySize);
	
	bool exit = false;
	int option;
	
	double elapsedSec = 0;
	clock_t begin, end;
	
	while(!exit) {
		InitArrays(ascending, descending, random, arraySize);
		DrawMenu();
		cin >> option;
		
		switch(option) {
			case InsertionSort:
				cout << "*InsertionSort: " << endl;
				begin = clock();
					Algorithms::Simple::InsertionSort(ascending, arraySize);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Simple::InsertionSort(descending, arraySize);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Simple::InsertionSort(random, arraySize);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case SelectionSort:
				cout << "*SelectionSort: " << endl;
				begin = clock();
					Algorithms::Simple::SelectionSort(ascending, arraySize);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Simple::SelectionSort(descending, arraySize);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Simple::SelectionSort(random, arraySize);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case Heapsort:
				cout << "*Heapsort: " << endl;
				begin = clock();
					Algorithms::Efficient::Heapsort(ascending, arraySize);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Efficient::Heapsort(descending, arraySize);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Efficient::Heapsort(random, arraySize);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case QuicksortLomuto:
				cout << "*Quicksort - Lomuto: " << endl;
				begin = clock();
					Algorithms::Efficient::Quicksort::Lomuto(ascending, 0, arraySize - 1);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Efficient::Quicksort::Lomuto(ascending, 0, arraySize - 1);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Efficient::Quicksort::Lomuto(ascending, 0, arraySize - 1);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case QuicksortHoare:
				cout << "*Quicksort - Hoare: " << endl;
				begin = clock();
					Algorithms::Efficient::Quicksort::Hoare(ascending, 0, arraySize - 1);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Efficient::Quicksort::Hoare(ascending, 0, arraySize - 1);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Efficient::Quicksort::Hoare(ascending, 0, arraySize - 1);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case BubbleSort:
				cout << "*BubbleSort: " << endl;
				begin = clock();
					Algorithms::Bubble::BubbleSort(ascending, arraySize);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Bubble::BubbleSort(descending, arraySize);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Bubble::BubbleSort(random, arraySize);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case CountingSort:
				cout << "*CountingSort: " << endl;
				begin = clock();
					Algorithms::Distribution::CountingSort(ascending, arraySize, arraySize);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Distribution::CountingSort(descending, arraySize, arraySize);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Distribution::CountingSort(random, arraySize, arraySize);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case BucketSort:
				cout << "*BucketSort: " << endl;
				begin = clock();
					Algorithms::Distribution::BucketSort(ascending, arraySize);
				end = clock();
				cout << "Ascedning arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Distribution::BucketSort(descending, arraySize);
				end = clock();
				cout << "Descending arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
				begin = clock();
					Algorithms::Distribution::BucketSort(random, arraySize);
				end = clock();
				cout << "Random arary elapsed seconds: " << ElapsedSec(begin, end) << endl;
			break;
			case Exit:
				exit = true;
			break;
		}
	}
	
	delete[] ascending, descending, random;
	return 0;
}

void InitArrays(int asc[], int desc[], int random[], int size) {
	srand(time(NULL));
	
	for(int i = 0; i < size; i++) {
		asc[i] = i + 1;
		desc[i] = size - i;
		random[i] = (rand() % size) + 1;
	}
}
void DisplayArrays(int asc[], int desc[], int random[], int size) {
	cout << "\tASC:\tDESC:\tRANDOM:\n";
	
	for(int i = 0; i < size; i++) {
		cout << "\t" << asc[i] << "\t" << desc[i] << "\t" << random[i] << "\n";
	}
}
inline double  ElapsedSec(clock_t begin, clock_t end) {
	return double(end - begin) / CLOCKS_PER_SEC;
}