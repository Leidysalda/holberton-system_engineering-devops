# C - Sorting algorithms & Big O

In computer science, a sorting algorithm is an algorithm that puts elements of a list in a certain order. The most frequently used orders are numerical order and lexicographical order. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists. Sorting is also often useful for canonicalizing data and for producing human-readable output. More formally, the output of any sorting algorithm must satisfy two conditions:

The output is in nondecreasing order (each element is no smaller than the previous element according to the desired total order);
The output is a permutation (a reordering, yet retaining all of the original elements) of the input.

## Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Example:

**First Pass:**

( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.

( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4

( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2

( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.



**Second Pass:**

( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )

( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )

Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.



**Third Pass:**

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )



```Python
// C program for implementation of Bubble sort
#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 
  int temp = *xp; 
  *xp = *yp; 
  *yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 

    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
    	if (arr[j] > arr[j+1]) 
	   	   swap(&arr[j], &arr[j+1]); 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
  int i; 
  for (i=0; i < size; i++) 
      printf("%d ", arr[i]); 
      printf("\n"); 
} 

// Driver program to test above functions 
int main() 
{ 
  int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  bubbleSort(arr, n); 
  printf("Sorted array: \n"); 
  printArray(arr, n); 
  return 0; 
} 
```
[GeeksforGeeks](https://www.geeksforgeeks.org/bubble-sort/)