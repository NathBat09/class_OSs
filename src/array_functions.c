#include "array_functions.h" 
#include <stdio.h> 

void sort_array(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
          if (arr[j] > arr[j + 1]) {
              int temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
          }
      }
  }
}

double calculate_median(int *arr, int size) {
  if (size % 2 == 1) {
      return arr[size / 2];
  } else {
      int mid1 = arr[(size / 2) - 1];
      int mid2 = arr[size / 2];
      return (mid1 + mid2) / 2.0;
  }
}