#include <bits/stdc++.h>
using namespace std;

void swap(int &num1, int &num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void selectionSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int min = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}

int main(){

	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, len);
	
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}