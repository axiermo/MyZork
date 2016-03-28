#ifndef rooms_
#define rooms_
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
class room
{
public:
	//Properties
	char* name;
	char* description;

	//Constructor
	room(char* _roomname, char* _roomdescription){
		printf("I'm constructing a room\n");
		name = (char*)malloc(sizeof(char) * 200);
		name = copyname(_roomname);	
		description = (char*)malloc(sizeof(char) * 200);
		description = copydescription(_roomdescription);
	}

	//Destructor
	~room(){
		printf("I'm deconstructing a room\n");
		free(description);
		free(name);

	}

	//Methods used for constructor
	char* copyname(char* sth){
		strcpy(name, sth);
		return name;
	}
	char* copydescription(char* sth){

		strcpy(description,sth);
		return description;
	}
	
private:

};








#endif