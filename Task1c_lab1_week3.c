#include <stdio.h>

void main() {
	int i;
	int N;
	float increment;
	float value_printed;
	
	printf("Input the largest number\n");
	scanf(" %d", &N);

	printf("Input the increment\n");
        scanf(" %f", &increment);


	if (increment < 1){
			for (i=0; i<= N/increment; i++){
							value_printed = i * increment; 
							printf("%f\n", value_printed);
							}
			}
	else{
		printf("Wrong input");
	}
}
							

