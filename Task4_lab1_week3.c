#include <stdio.h>

void main() {

	int x;
	int y;
	char movement;

	printf("input your initial x position \n");
        scanf(" %d", &x);

	printf("input your initial y position \n");
        scanf(" %d", &y);



	while(1){

		if(x <= 0 || x>=5 || y<=0 || y>=5){
                       printf("The player has  hit the  boundary at (%d,%d)", x,y);
		       break;
		}

		printf("input your movement \n");
	        scanf(" %c", &movement);
		
		switch( movement ) {
			case 'U':
			case 'u':
				y=y+1;
				break;
			case 'D':
                        case 'd':
                                y=y-1;
				break;
			case 'R':
                        case 'r':
                                x=x+1;
				break;
			case 'L':
                        case 'l':
                                x=x-1;
				break;
		}	
	}
}
