#include "Rooms.h"

class exit{


public:
	char path_name[10];
	bool openpath = 1;
	enum direction{
		North,
		South,
		East,
		West
		
	};
	
	Room* source;
	Room* destiny;



};