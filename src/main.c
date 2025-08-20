#include "array_functions.h" 
#include <stdlib.h>
#include <stdio.h>

int main() { 
  int size;

  printf("Enter the number of elements: ");
  scanf("%d", &size);

  if (size <= 0) {
      printf("Array size must be greater than 0.\n");
      return 1;
  }

  int *arr = malloc(size * sizeof(int));
  if (!arr) {
      printf("Memory allocation failed.\n");
      return 1;
  }

  printf("Enter %d integers:\n", size);
  for (int i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
  }

  sort_array(arr, size);

  double median = calculate_median(arr, size);

  printf("Median = %.2f\n", median);

  free(arr);
  return 0;
} 