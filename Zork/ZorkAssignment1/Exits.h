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
//Constructor
	exits(char* _exitname, char* _exitdescription){
		printf("I'm constructing an exit\n");
		name = (char*)malloc(sizeof(char) * 200);
		name = copyname(_exitname);
		description = (char*)malloc(sizeof(char) * 200);
		description = copydescription(_exitdescription);
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




private:

};






#endif // !exits_H
