#ifndef player
#define player_
#include "Room.h"
class player
{
public:
	room* currentroom;

	player(room* whereami){
		printf("I'm creating a player\n");
		currentroom = whereami;
	}
	~player(){
		printf("I'm deleting a player\n");

	}

private:

};




#endif