#include <stdio.h>
#include <stdlib.h>

int main() {   
      int numElements, i;
      int *arr = NULL;

      printf("Enter number of elements: ");
      scanf("%d", &numElements);

      if (numElements <= 0) {
          printf("Invalid Input\n");
          return 1;
      }

      arr = (int *)malloc(numElements * sizeof(int));

      if (arr == NULL) {
          printf("Memory allocation issue.\n");
          return 1;
      }

      printf("Enter %d integers:\n", numElements);
      for (i = 0; i < numElements; i++) {
          scanf("%d", &arr[i]);
      }

      printf("Reverse order: ");
      for (i = numElements - 1; i >= 0; i--) {
          printf("%d ", arr[i]);
      }
      printf("\n");

      free(arr);

      arr = NULL;

      return 0;
  }