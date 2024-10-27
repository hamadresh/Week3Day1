#include <stdio.h>

void main() {
	int num_cities;
	int i;
	int num_people;
	int min_people;
	int max_people;
	int total_population=0;

	printf("enter the number of cities\n");
	scanf("%d", &num_cities);

	printf("enter the number of people in city 1 \n");
        scanf("%d", &num_people);

	total_population = num_people + total_population;

	min_people = num_people;
	max_people = num_people;
	for(i=2; i<= num_cities;i++) {
		printf("enter the number of people in city %d \n", i);
        	scanf("%d", &num_people);

		total_population = num_people + total_population;

		if (num_people > max_people){
			
			max_people = num_people;
		}
		if (num_people < min_people){
			min_people = num_people;
		}


	}
	printf("max number of people is %d\n", max_people);
	printf("min number of people is %d\n", min_people);
	printf("average number of people is %d\n", total_population/num_cities);
}
					
