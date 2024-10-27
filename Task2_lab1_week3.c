#include <stdio.h>
#include <math.h>
int main() {
		int N;
		int i;

		printf("Insert your number\n");
		scanf(" %d", &N);

		int limit = (int)sqrt(N);

		if(N <= 2){
			printf("prime\n");
			return(0);
		}
		else{
			for (i=2;i <= limit; i++){
							if (N % i == 0){
							       printf("not prime\n");
							       return(0);
									}
							}
		    }
		printf("prime\n");
		return(0);
	
}

							

		


		
