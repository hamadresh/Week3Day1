#include <stdio.h>

void main(){

		
		int i;
		int N;

		printf("Insert the highest number\n");
		scanf("%d",&N);

		for(i=1;i<=20;i++){
					if(i % 10 == 4 || i % 10 == 7){
						continue;
						}
					else{
						printf(" %d",i);
						}
				}
}

