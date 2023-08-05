#include<stdio.h>

int main() {
  // Allocate a block of memory for an integer.
  int *ptr = malloc(sizeof(int));

  // Store the value 10 in the memory location pointed to by ptr.
  *ptr = 10;

  // Print the value that is stored in the memory location pointed to by ptr.
  printf("%d\n", *ptr);
    printf("size of ptr = %d\naddress of ptr = %x \n\n",sizeof(ptr), &ptr);
  // Free the memory that was allocated for ptr.
  free(ptr);
  printf("%d\n", *ptr);
    printf("size of ptr = %d\naddress of ptr = %x \n\n",sizeof(ptr), &ptr);
  return 0;
}
    