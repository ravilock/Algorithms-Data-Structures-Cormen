#include<stdio.h>

#define ARRAY_LENGTH 6

void show(int array[ARRAY_LENGTH]) {
	printf("[%d, ", array[0]);
	for (int i = 1;i < ARRAY_LENGTH - 1; i++) {
		printf("%d, ", array[i]);
	}
	printf("%d]\n", array[ARRAY_LENGTH - 1]);
}

void insertionSort(int array[ARRAY_LENGTH]) {
	int key, j;
	for (int i = 1; i < ARRAY_LENGTH; i++) {
		key = array[i];
		// Insert array[i] into the sorted sequence A[i.. (j-1)].
		for (j = i - 1; j >= 0 && array[j] > key; j--) {
			array[j + 1] = array[j];
		}
		array[j + 1] = key;
		show(array);
		printf("\n");
	}
}


int main(void) {
	int array[ARRAY_LENGTH] = {5, 2, 4, 6, 1, 3};
	show(array);
	printf("\n");
	insertionSort(array);	
	show(array);
	return 0;
}
