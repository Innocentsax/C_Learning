/*INTRODUCTION TO SORTING

SORTING: Sorting is arranging the elements in a list or collection in increasing or decreasing order of some property

*Unsorted: Linear Search
*Sorted: Binary Search

==> Different types of Sorting Algorithms we will be looking at:
1. Bubble sort
2. Selection sort
3. Insertion sort
4. Merge sort
5. Quick sort
6. Heap sort
7. Counting Sort
8. Radix Sort

==> Classification of sorting based on parameter:
1. Time complexity
2. Space Complexity or memory usage
    *in place, constant memory
    *Memory usage grows with input-size
3. Stability
4. Internal sort(All records in main memory or RAM) or External sort(records are on disk/tapes)
5. Recursive or Non- recursive
*/

#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int a[], int length){
  for(int i = 1; i < length; i++){
    int key = a[i];
    int j = i - 1;

    while (j >= 0 && a[j] > key){
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
}
int main()
{
  int a[] = {9, 5, 6, 3, 8, 7, 2, 10};
  insertion_sort(a, 8);
  for(int i = 0; i < 8; i++){
    printf("a[%d] = %d\n", i, a[i]);
  }printf("\n");
}
/*
THE BUBBLE SORT ALGORITHM:
==> The bubble sort algorithm is the fundamental snd simplest form of an algorithm

==> The bubble sort algorithm moves through a sequence of data and rearranges them into ascending or descending order one number at a time.

==> Bubble sort algorithm is also known as sinking sort algorithm

==> Bubble sort algorithm does not search an array as a whole, it works by comparing two adjacent pairs of elements in an array.

==> If the elements are not in the correct order, they are swapped so that largest of two moves up, and this process continues until the most significant elements bubble up to the highest position

==> After this occurs, the search for the next most significant object starts, and the swapping continues until the whole array is in the correct position.

==>How does the Bubble Sort Algorithm Works:
      n = Number of elements in the array
      n-1 =  Number of time the comparison takes place.
      e.g 5-1 = 4
==> Variation of Bubble Sort Algorithm
1. Odd-even sort is a parallel version of bubble sort for the message passing system.

2. Cocktail Shaker sort is a bi-directional bubble sort that first goes from beginnig to end and then ends to the beginning.

==> Complexity of Bubble Sort Algorithm
      i. Best case performance(O(n))
      ii. Average case performance(O(n*n))
      iii. Worst case performance(O(n*n))
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[50], num, a, b, temp;
  printf("Enter the number of elements\n");
  scanf("%d", &num);

  printf("Enter the element", num);
  for(a = 0; a < num; a++)
    scanf("%d", &arr[a]);

  /*First for loop for the number of rotation */
  for (a = 0; a < num - 1; a++){
    /* Second for loop for the number of PASS */
    for (b = 0; b < num - a - 1; b++){
      /* If the next element is greater than the next consecutive element*/
      if (arr[b] > arr[b + 1]){
        temp = arr[b];
        arr[b] = arr[b+1];
        arr[b+1] = temp;
      }
    }
  }
  /*Printing all the sorted elements*/
  printf("Sorted array is \n");
  for (a = 0; a < num; a++)
    printf("%d\n", arr[a]);
  
  return 0;
}

//Beginning
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Unsorted or linear Search using Intergers

int main()
{
  int arr[] = {4, 2, 5, 9, 6, 13};

  for (int i = 0; i<5; i++){
    if (arr[i] == 0){
      printf("Found\n");
    }
  }
  printf("Not found\n");
}*/

int main()
{
  char names[] = {"Innocent"};
  for (int i = 0; i<3; i++){
    if (strcmp(&names[i], "George")){
      printf("Found\n");
    }
  }
  printf("Not found\n");
}
