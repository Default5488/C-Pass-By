#include <stdio.h>

void increment(int *xptr)
{
	(*xptr)++;
}

int main(void) {
	int move = 10;
	printf("Before increment %d \n", move);
	increment(&move);
	printf("After incremet %d \n", move);
	
	
  return 0;
}

/*
https://stackoverflow.com/questions/2229498/passing-by-reference-in-c

reference material for how pass by reference works
*/