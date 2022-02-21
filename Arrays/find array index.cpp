#include<stdio.h>
int main ()
{
	int A[5];
	int i;
	for(i=0;i<5;i++)
	printf("%u\n",&A[i]);
	return 0;
}
//why we use %u in c?
//The %u format specifier is implemented for fetching values from the address of a variable having unsigned decimal integer stored in the memory. 
//This is used within printf() function for printing the unsigned integer variable.
