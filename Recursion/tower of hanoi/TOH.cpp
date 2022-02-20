//Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
//1) Only one disk can be moved at a time.
//2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
//3) No disk may be placed on top of a smaller disk.


#include<stdio.h>
void TOH(int n, int A, int B, int C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("(%d,%d)\n",A,C);
		TOH(n-1,B,A,C);
	}
	
}
int main()
{
	TOH(3,1,2,3);
	return 0;
	
}
