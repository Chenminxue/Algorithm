// reference : https://github.com/shree1999/Data-Structures-and-Algorithms/blob/master/SortingAlgorithms/quicksort/quickSort.cpp

#include <iostream>
#include <stdlib.h>

using namespace std;

void swap(int* a, int* b)                                               // Function for swapping the array elements                          
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int a[], int lowerIndex, int upperIndex)                   // Partitioning of the array
{
    int pivot, index, i;
    index = lowerIndex;
    pivot = upperIndex;
    for (i = lowerIndex; i < upperIndex; i++)
    {
        if (a[i] < a[pivot])
        {
            swap(&a[i], &a[index]);
            index++;
        }
    }
    swap(&a[pivot], &a[index]);
    return index;
}

int QuickSort(int a[], int lowerIndex, int upperIndex)
{
    int pindex;
    if (lowerIndex < upperIndex)
    {
        pindex = Partition(a, lowerIndex, upperIndex);
        QuickSort(a, lowerIndex, pindex - 1);                             // Recursively calling function
        QuickSort(a, pindex + 1, upperIndex);
    }
    return 0;
}
int main()
{
    int arr[] = { 10,9,8,7,6,5,5,4,3,2,2,1 };
    int n = sizeof(arr) / sizeof(arr[0]);


    QuickSort(arr, 0, n - 1);
    cout << "\nSorted Data ";
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
    return 0;
}