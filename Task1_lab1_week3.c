#include <stdio.h>

void main () {

	int N;
	int i;
	int printed_number;
	printf("Pick highest number \n");
	scanf(" %d", &N);
	for(i=0;i<=N ;i++)
	{
	printed_number=N-i;
	printf(" %d\n", printed_number);
	}
}
