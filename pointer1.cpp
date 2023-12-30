#include<stdio.h>

int main()

{
	int num, *ptr, square;
	
	printf("Enter the number = ");
	scanf("%d" ,&num);
	
	ptr = &num;
	
	square = (*ptr) * (*ptr);
	
	printf("The square of %d is = %d " ,num ,square);
	return 0;
}

