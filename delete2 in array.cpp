/* program to delete a particular element from an array using user defined function in c. */  
#include <stdio.h>  
#include <conio.h>  
  
// create user defined function update elements  
addElement (int *arr, int num, int pos)  
{  
    int i;  
    // use for loop to update the index  
    for (i = pos-1; i < num - 1; i++)  
    {  
        arr[i] = arr[i+1]; //   
    }  
}  
  
// create disp() function to print the input array elements  
disp( int arr[], int num)  
{  
    int i;  
    // use for loop to print the resultant array  
    for ( i = 0; i < num; i++)  
    {  
        printf( "\n arr[%d] = %d", i, arr[i]);  
    }  
}  
  
int main ()  
{  
    // declaration of the array  
    int arr[100];  
    int i, num, pos, result;  
      
    printf (" Enter the size of the array: ");  
    scanf (" %d", &num);  
      
    printf (" \n Enter the %d elements in an array: \n", num);  
    // use for loop to input the elements one by one  
    for (i = 0; i < num; i++)  
    {  
        printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
      
    // define the position of the element to be deleted from an array  
    printf (" Enter the position of the element you want to delete from an array: ");  
    scanf (" %d", &pos);  
      
// check whether thr defined pos is less than equal to size of array (num) and larger than 0  
    if (pos <= num && pos > 0)  
    {  
        printf (" Array before deletion: \n");  
          
        // call disp() function print the array  
        disp (arr, num);  
        // call addElement() function  
        addElement(arr, num, pos);  
          
        printf (" \n Array after deletion: \n");  
        // disp() function to print the updated array  
        disp( arr, num-1);  
    }  
    return 0;     
}  
