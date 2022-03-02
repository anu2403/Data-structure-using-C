#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int srch_element){
   while (start_index <= end_index){
      int middle =(start_index + (end_index ))/2;
      if (array[middle] == srch_element)
         return middle;
      if (array[middle] < srch_element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int srch_element = 72;
   int found_index = iterativeBinarySearch(array, 0, n-1, srch_element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
