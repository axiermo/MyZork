#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char move;
	typedef struct house {
		int x;
		int y;
	}house;

	house person;
	person.x = 1;
	person.y = 1;
	char position;

	printf("Where do you want to go? Typer n//s//e//w//q (North, south, east, west and quit)\n");
	move = getchar();
	getchar();
	if (move != 'q'){
		while (move != 'q') {

			//Moving
			if (move == 'n'){
				if (person.y - 1 >= 0) {
					person.y = person.y - 1;
					printf("You went north.\n");
				}
				else {
					printf("You can't go in that direction, there is a wall there.\n");
					break;
				}
			}
			if (move == 's') {
				if ((person.y + 1 <= 2) && (person.x != 2)) {
					person.y = person.y + 1;
					printf("You went south.\n");
				}
				else {
					printf("You can't go in that direction, there is a wall there.\n");
					break;
				}
			}
			if (move == 'e') {
				if ((person.x + 1 <= 2) && (person.y != 2)) {
					person.x = person.x + 1;
					printf("You went east.\n");
				}
				else {
					printf("You can't go in that direction, there is a wall there.\n");
					break;
				}
			}
			if (move == 'w') {
				if (person.x - 1 > 0) {
					person.x = person.x - 1;
					printf("You went west.\n");
				}
				else {
					printf("You can't go in that direction, there is a wall there.\n");
					
				}
			}
			//Where are we now?
			if ((person.x == 1) && (person.y == 0)){
				printf("You are in the Kitchen.\n");
			}
			else if ((person.x == 1) && (person.y == 1)) {
				printf("You are in the Dinning Room.\n");
			}
			else if ((person.x == 2) && (person.y == 0)) {
				printf("You are in the Pantry.\n");
			}
			else if ((person.x == 2) && (person.y == 1)) {
				printf("You are in the Bath.\n");
			}
			else  {
				printf("You are in the Bedroom.\n");
			}


			printf("Where do you want to go now? Typer n//s//e//w//q (North, south, east, west and quit)\n");
			move = getchar();
			getchar();
		}

	}

	system("pause");
	return 0;
	
}

