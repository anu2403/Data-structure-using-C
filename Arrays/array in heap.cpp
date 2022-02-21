#include<stdio.h>
#include<stdlib.h>
int main()
{
//	creating normal array in stack
	int A[5]={2,4,6,8,10}; 
	int *p;
	int i;
	p=(int *)malloc(5*sizeof(int));
//	malloc () is used to allocate a block of memory in heap , this thing done in c with malloc ().
//The address of an array in heap given in hexadecimal number.
//in c++ we use malloc() as "New" function . Eg -> p= new int[5];
	p[0]=1;
	p[1]=2;
	p[2]=3;
	p[3]=4;
	p[4]=5;
	for(i=0;i<5;i++)
	printf("%d",A[i]);
	printf("\n");
	for(i=0;i<5;i++)
	printf("%d",p[i]);
	return 0;
	
}
