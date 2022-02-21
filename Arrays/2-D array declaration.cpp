#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[3][4]={{1,2,4,5},{3,4,7,8},{6,9,0,1}};
int i,j;
int *B[3];
 int **C;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d",A[i][j]);
		printf("\n");
	}
	
	B[0]=(int*)malloc(4*sizeof(int));
		B[1]=(int*)malloc(4*sizeof(int));
			B[2]=(int*)malloc(4*sizeof(int));
	{
		for(j=0;j<4;j++)
		printf("%d",B[i][j]);
		printf("\n");
	}
			
			 C=(int**)malloc(3*sizeof(int*));
			 C[0]=(int*)malloc(4*sizeof(int));
			 C[1]=(int*)malloc(4*sizeof(int));
			 C[2]=(int*)malloc(4*sizeof(int));
	{
		for(j=0;j<4;j++)
		printf("%d",C[i][j]);
		printf("\n");
	}
			 return 0;
			 
}

