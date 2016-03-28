#include "Room.h"
#include "Exits.h"
#include <stdio.h>
#include "Player.h"
int main(void){
	
	
	{
		room room1("nametest", "nametest");
		room* a = &room1;
		exits exit1("exit nametest", "exit descriptiontest");
		player myplayer(a);
		int x = 5;
	}
	int i = 1;
	i++;
	return 0;
}