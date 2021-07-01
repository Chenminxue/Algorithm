#include <iostream>
#include <cstdlib>
using namespace std;

void bubbleSort(int arr[], int len) {

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			int temp;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {

	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}


	return 0;
}