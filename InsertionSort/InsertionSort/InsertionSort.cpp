#include <iostream>
#include <array>
using namespace std;

// this program was created by Evan Doerksen

// this program is a simple insertion sort given an array of integers
// TODO make a quicksort algorithm and compare the runtimes

// insertion sort will take an array of integers and sort in increasing order (this is O(n^2) and should never be used
// this is an excersise in why insertion sort sucks
// it will shift all numbers down if it finds a number out of place
// inputs: array, size of array
// outputs: pointer to an array
int * insertionSort(int *numbers, int size) {

	int temp;
	int counter = 0;
	bool doneSorting = false;

	while (!doneSorting) {
		// comparison, swap if number is greater than the one behind it
		for (int i = 0; i < size - 1; i++) {
			
			// comparison
			if (numbers[i] > numbers[i + 1]) {
				temp = numbers[i + 1];
				numbers[i + 1] = numbers[i];
				numbers[i] = temp;
				counter = 0;

			}
			else {
				// check to exit loop
				if (counter == size - 1) {
					doneSorting = true;
				}
				counter = counter + 1;
			}
		}
		

	}
	return numbers;
}

// prints the sorted array
// inputs: a pointer to an array
// outputs: none
// prints the array
void displayList(int *list, int size) {
	
	cout << "Sorted array: ";
	for (int i = 0; i < size; i++) {
		if (i == size - 1) {
			cout << *(list + i);
		}
		else {
			cout << *(list + i) << ", ";
		}
	}
	cout << "\n";
	return;
}





int main() {

	// test arrays 
	int test[10] = { 5, 3, 2, 1, 67, 8, 9, 4, 10, 33 };
	// coulda made a loop for this
	// worst case scenario for an array of size 101
	int test2[102] = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 91, 90,
						89, 88, 87, 86, 85, 84, 83, 82, 81, 80,
						79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 
						69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 
						59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 
						49, 48, 47, 46, 45, 44, 43, 42, 41 ,40, 
						39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 
						29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 
						19, 18, 17, 16, 15, 14, 13 ,12, 11, 10, 
						9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	int *sortedArray;

	// sorted array is a pointer which is now points to an array
	sortedArray = insertionSort(test, 10);
	// passing in a pointer to an array
	displayList(sortedArray, 10);

	// big array test
	sortedArray = insertionSort(test2, 101);
	displayList(sortedArray, 101);

	return 0;
}