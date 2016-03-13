#include "Rooms.h"
#include "Exits.h"
#include "World.h"
#include "Globals.h"
#include <string.h>
#include "Players.h"

class world{
	void CreateWorld(){
		//Create all the rooms
		Room* YellowBrickPath = new Room{ "YellowBrickPath", "There's a path made of yellow bricks" };
		Room* CandyHouse = new Room{ "CandyHouse", "There's a house made of candy here! Is this heaven?" };
		Room* SevenDwarfsHouse = new Room{ "SevenDwarfsHouse", "A wise looking dwarf is all you can see here, well and a big house" };
		Room* Mine = new Room{ "Mine", "There's a bunch of tools and minerals aroudn here.Also a happy dwarf dancing" };
		Room* TomThumbGarden = new Room{ "TomThumbGarden", "There's a really little foe wanding around and screaming to a dog" };
		Room* TomThumbHouse = new Room{ "TomThumbHouse", "Everything is bigger than what you would expect from a house of a really little guy" };
		Room* TrollBridge = new Room{ "TrollBridge", "Something stinks under that bridge but you can see anything" };
		Room* Forest = new Room{ "Forest", "This forest is really creepy, wait did I hear a wolf?" };
		Room* WonderlandCastle = new Room{ "WonderlandCastle", "You can see a castle made of cards and some strange guys custoding it" };
		Room* CastleGarden = new Room{ "CastleGarden", "There's a strange brown thing lying in the middle of the grass. You can also see a huge castle right in front of you" };
		Room* Castle = new Room{ "Castle", "There's a guy sitting in a throne with a fancy hat, he might be the great Wizard of Oz" };
		
		//Create all the  exits
		exit* exits = new exit[20];

		//Yellow Path->Candy House Exit 0
		strcpy_s(exits[0].path_name, 30, exit_name[0]);
		exits[0].source = YellowBrickPath;
		exits[0].destiny = CandyHouse;
		exits[0].South;

		//Candy House -> Yellow Path Exit 1
		strcpy_s(exits[1].path_name, 30, exit_name[1]);
		exits[1].source = CandyHouse;
		exits[1].destiny = YellowBrickPath;
		exits[1].North;
		//Candy house -> SEven Dwarf House Exit 2
		strcpy_s(exits[2].path_name, 30, exit_name[2]);
		exits[2].source = CandyHouse;
		exits[2].destiny = SevenDwarfsHouse;
		exits[2].West;
		//Candy House -> Tom Thumb Garden Exit 3
		strcpy_s(exits[3].path_name, 30, exit_name[3]);
		exits[3].source = CandyHouse;
		exits[3].destiny = TomThumbGarden;
		exits[3].East;
		//Candy House -> Troll Bridge Exit 4
		strcpy_s(exits[4].path_name, 30, exit_name[4]);
		exits[4].source = CandyHouse;
		exits[4].destiny = TrollBridge;
		exits[4].South;

		//Seven Dwarf House-> Candy House Exit 5
		strcpy_s(exits[5].path_name, 30, exit_name[5]);
		exits[5].source = SevenDwarfsHouse;
		exits[5].destiny = CandyHouse;
		exits[5].East;
		//Seven Dwarf House -> Mine Exit 6
		strcpy_s(exits[6].path_name, 30, exit_name[6]);
		exits[6].source = SevenDwarfsHouse;
		exits[6].destiny = Mine;
		exits[6].South;
		//Mine->Seven Dwarf House Exit 7
		strcpy_s(exits[7].path_name, 30, exit_name[7]);
		exits[7].source = Mine;
		exits[7].destiny = SevenDwarfsHouse;
		exits[7].North;

		//Tom Thumb Garden -> Candy House Exit 8
		strcpy_s(exits[8].path_name, 30, exit_name[8]);
		exits[8].source = TomThumbGarden;
		exits[8].destiny = CandyHouse;
		exits[8].West;
		//Tom Thumb Garden -> Tom Thumb House Exit 9
		strcpy_s(exits[9].path_name, 30, exit_name[9]);
		exits[9].source = TomThumbGarden;
		exits[9].destiny = TomThumbHouse;
		exits[9].North;
		exits[9].openpath = 0;
		//Tom Thumb House -> Tom Thumb garden Exit 10
		strcpy_s(exits[10].path_name, 30, exit_name[10]);
		exits[10].source = TomThumbHouse;
		exits[10].destiny = TomThumbGarden;
		exits[10].South;
		//Troll Bridge -> Candy House Exit 11
		strcpy_s(exits[11].path_name, 30, exit_name[11]);
		exits[11].source = TrollBridge;
		exits[11].destiny = CandyHouse;
		exits[11].North;
		//Troll Bridge -> Forest Exit 12
		strcpy_s(exits[12].path_name, 30, exit_name[12]);
		exits[12].source = TrollBridge;
		exits[12].destiny = Forest;
		exits[12].East;
		//Forest -> Troll Bridge Exit 13
		strcpy_s(exits[13].path_name, 30, exit_name[13]);
		exits[13].source = Forest;
		exits[13].destiny = TrollBridge;
		exits[13].West;
		//Forest -> Wonderland Castle Exit 14
		strcpy_s(exits[14].path_name, 30, exit_name[14]);
		exits[14].source = Forest;
		exits[14].destiny = WonderlandCastle;
		exits[14].South;
		//Forest -> Castle Garden Exit 15
		strcpy_s(exits[15].path_name, 30, exit_name[15]);
		exits[15].source = Forest;
		exits[15].destiny = CastleGarden;
		exits[15].East;
		//Wonderland Castle -> Forest Exit 16
		strcpy_s(exits[16].path_name, 30, exit_name[16]);
		exits[16].source = WonderlandCastle;
		exits[16].destiny = Forest;
		exits[16].East;
		//Castle Garden ->Forest Exit 17
		strcpy_s(exits[17].path_name, 30, exit_name[17]);
		exits[17].source = CastleGarden;
		exits[17].destiny = Forest;
		exits[17].West;
		//Castle Garden -> Castle Exit 18
		strcpy_s(exits[18].path_name, 30, exit_name[18]);
		exits[18].source = CastleGarden;
		exits[18].destiny = Castle;
		exits[18].South;
		//Castle-> Castle Garden Exit 19
		strcpy_s(exits[19].path_name, 30, exit_name[19]);
		exits[19].source = Castle;
		exits[19].destiny = CastleGarden;
		exits[19].North;

		//Create player

		player maincharacter;






	




	}

	void freeWorld(){
		
		
	}
};