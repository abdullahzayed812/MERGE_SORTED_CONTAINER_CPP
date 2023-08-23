#include <iostream>
using namespace std;

void mergeSortedArray(int arr1[], int size1, int arr2[], int size2, int result[], int size3)
{
  int index1 = 0, index2 = 0, resultIndex = 0;

  while (index1 < size1 && index2 < size2)
  {
    if (arr1[index1] < arr2[index2])
      result[resultIndex++] = arr1[index1++];
    else
      result[resultIndex++] = arr2[index2++];
  }

  while (index1 < size1)
    result[resultIndex++] = arr1[index1++];

  while (index2 < size2)
    result[resultIndex++] = arr2[index2++];
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}

int main()
{
  const int SIZE1 = 3, SIZE2 = 5, SIZE3 = 8;
  int arr1[SIZE1] = { 20, 100, 101 },
    arr2[SIZE2] = { 1, 2, 19, 30, 28 },
    result[SIZE3];

  mergeSortedArray(arr1, SIZE1, arr2, SIZE2, result, SIZE3);

  printArray(result, SIZE3);

  return 0;
}