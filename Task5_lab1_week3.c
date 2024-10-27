#include <stdio.h>

void main() {

	int k;
	int a=0;
	int e=0;
	int i=0;
	int u=0;
	int o=0;
	int other_letter_count=0;
	int num_char;
	char user_inputted_char;

	printf("number of charachters\n");
	scanf("%d", &num_char);

	for(k = 1; k <= num_char; k++){
					printf("enter your charachter\n");
					scanf(" %c", &user_inputted_char);

					if (user_inputted_char == 'a'){
						a = a+1;
						continue;
							}
					if (user_inputted_char == 'e'){
                                                e = e+1;
						continue;
                                        		}

					if (user_inputted_char == 'i'){
                                                i = i+1;
						continue;
                                        		}

					if (user_inputted_char == 'o'){
                                                o = o+1;
						continue;
                                        		}

					if (user_inputted_char == 'u'){
                                                u = u+1;
						continue;
							}
					other_letter_count = other_letter_count + 1;


					
					}
	printf("number of a is %d, number of e is %d, number of i is %d, number of u is %d, number of o is %d, number of other charachters is %d \n", a,e,i,u,o,other_letter_count);

}

