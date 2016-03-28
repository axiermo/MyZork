#ifndef exits_H
#define exits_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Room.h"

class exits
{
public:
//Properties
	char* name;
	char* description;
	room* source=NULL;
	room* destiny=NULL;
	char* direction=NULL;
	bool open = NULL;
//Constructor
	exits(char* _exitname, char* _exitdescription, char* _direction, room* _source, room* _destiny, bool _open){
		printf("I'm constructing an exit\n");
		name = (char*)malloc(sizeof(char) * 200);
		name = copyname(_exitname);
		description = (char*)malloc(sizeof(char) * 200);
		description = copydescription(_exitdescription);
		direction = (char*)malloc(sizeof(char) * 200);
		direction = copyname(_direction);
		source = _source;
		destiny = _destiny;
		open = _open;
	}
//Destructor
	~exits(){
		printf("I'm deconstructing an exit\n");
		free(description);
		free(name);

	}
//Methods used in the constructor
	char* copyname(char* sth){
		strcpy(name, sth);
		return name;
	}
	char* copydescription(char* sth){

		strcpy(description, sth);
		return description;
	}
	char* copydirection(char* sth){

		strcpy(direction, sth);
		return direction;
	}




private:

};






#endif // !exits_H
