#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				int count = i;
				while (count > j) {
					arr[count] = arr[count - 1];
					count--;
				}
				arr[j] = temp;
				break;
			}
		}
	}
}

int main() {

	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}