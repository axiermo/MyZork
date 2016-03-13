#include "Rooms.h"
#include "Exits.h"
#include "World.h"
#include "Globals.h"
#include <string.h>
#include "Players.h"

class world{
	void CreateWorld(){
		//Create all the rooms
		Room* Rooms = new Room[11];

		for (int i = 0; i < 11; i++){
			strcpy_s(Rooms[i].name, 30, room_name[i]);
			strcpy_s(Rooms[i].name, 200, room_description[i]);
		}
		//Create all the  exits
		exit* exits = new exit[20];

		//Yellow Path->Candy House Exit 0
		strcpy_s(exits[0].path_name, 30, exit_name[0]);
		exits[0].source = &Rooms[0];
		exits[0].destiny = &Rooms[1];
		exits[0].South;

		//Candy House -> Yellow Path Exit 1
		strcpy_s(exits[1].path_name, 30, exit_name[1]);
		exits[1].source = &Rooms[1];
		exits[1].destiny = &Rooms[0];
		exits[1].North;
		//Candy house -> SEven Dwarf House Exit 2
		strcpy_s(exits[2].path_name, 30, exit_name[2]);
		exits[2].source = &Rooms[1];
		exits[2].destiny = &Rooms[2];
		exits[2].West;
		//Candy House -> Tom Thumb Garden Exit 3
		strcpy_s(exits[3].path_name, 30, exit_name[3]);
		exits[3].source = &Rooms[1];
		exits[3].destiny = &Rooms[4];
		exits[3].East;
		//Candy House -> Troll Bridge Exit 4
		strcpy_s(exits[4].path_name, 30, exit_name[4]);
		exits[4].source = &Rooms[1];
		exits[4].destiny = &Rooms[6];
		exits[4].South;

		//Seven Dwarf House-> Candy House Exit 5
		strcpy_s(exits[5].path_name, 30, exit_name[5]);
		exits[5].source = &Rooms[2];
		exits[5].destiny = &Rooms[1];
		exits[5].East;
		//Seven Dwarf House -> Mine Exit 6
		strcpy_s(exits[6].path_name, 30, exit_name[6]);
		exits[6].source = &Rooms[2];
		exits[6].destiny = &Rooms[3];
		exits[6].South;
		//Mine->Seven Dwarf House Exit 7
		strcpy_s(exits[7].path_name, 30, exit_name[7]);
		exits[7].source = &Rooms[3];
		exits[7].destiny = &Rooms[2];
		exits[7].North;

		//Tom Thumb Garden -> Candy House Exit 8
		strcpy_s(exits[8].path_name, 30, exit_name[8]);
		exits[8].source = &Rooms[4];
		exits[8].destiny = &Rooms[1];
		exits[8].West;
		//Tom Thumb Garden -> Tom Thumb House Exit 9
		strcpy_s(exits[9].path_name, 30, exit_name[9]);
		exits[9].source = &Rooms[4];
		exits[9].destiny = &Rooms[5];
		exits[9].North;
		exits[9].openpath = 0;
		//Tom Thumb House -> Tom Thumb garden Exit 10
		strcpy_s(exits[10].path_name, 30, exit_name[10]);
		exits[10].source = &Rooms[5];
		exits[10].destiny = &Rooms[4];
		exits[10].South;
		//Troll Bridge -> Candy House Exit 11
		strcpy_s(exits[11].path_name, 30, exit_name[11]);
		exits[11].source = &Rooms[6];
		exits[11].destiny = &Rooms[1];
		exits[11].North;
		//Troll Bridge -> Forest Exit 12
		strcpy_s(exits[12].path_name, 30, exit_name[12]);
		exits[12].source = &Rooms[6];
		exits[12].destiny = &Rooms[7];
		exits[12].East;
		//Forest -> Troll Bridge Exit 13
		strcpy_s(exits[13].path_name, 30, exit_name[13]);
		exits[13].source = &Rooms[7];
		exits[13].destiny = &Rooms[6];
		exits[13].West;
		//Forest -> Wonderland Castle Exit 14
		strcpy_s(exits[14].path_name, 30, exit_name[14]);
		exits[14].source = &Rooms[7];
		exits[14].destiny = &Rooms[8];
		exits[14].South;
		//Forest -> Castle Garden Exit 15
		strcpy_s(exits[15].path_name, 30, exit_name[15]);
		exits[15].source = &Rooms[7];
		exits[15].destiny = &Rooms[9];
		exits[15].East;
		//Wonderland Castle -> Forest Exit 16
		strcpy_s(exits[16].path_name, 30, exit_name[16]);
		exits[16].source = &Rooms[8];
		exits[16].destiny = &Rooms[7];
		exits[16].East;
		//Castle Garden ->Forest Exit 17
		strcpy_s(exits[17].path_name, 30, exit_name[17]);
		exits[17].source = &Rooms[9];
		exits[17].destiny = &Rooms[7];
		exits[17].West;
		//Castle Garden -> Castle Exit 18
		strcpy_s(exits[18].path_name, 30, exit_name[18]);
		exits[18].source = &Rooms[9];
		exits[18].destiny = &Rooms[10];
		exits[18].South;
		//Castle-> Castle Garden Exit 19
		strcpy_s(exits[19].path_name, 30, exit_name[19]);
		exits[19].source = &Rooms[10];
		exits[19].destiny = &Rooms[9];
		exits[19].North;

		//Create player

		player maincharacter;






	




	}

	void freeWorld(){
		
		
	}
};