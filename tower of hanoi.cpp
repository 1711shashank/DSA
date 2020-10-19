/* Tower of Hanoi */

#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int num;
	char A,C,B;
	printf("Enter the numbers of disks:");
	scanf("%d",&num);
	printf("Sequence of moves are:");
	towers(num,'A','C','B');
	return 0;
}
void towers(int n,char frompeg,char topeg,char auxpeg)
{
	if(n==1)
	{
		printf("\n Move disk 1 from peg %c to peg %c",frompeg,topeg);
		return;
	}
	towers(n-1,frompeg,auxpeg,topeg);
	printf("\n Move disk %d from peg %c to peg %c",n,frompeg,topeg);
	towers(n-1,auxpeg,topeg,frompeg);
}
