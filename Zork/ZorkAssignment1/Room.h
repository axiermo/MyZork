#ifndef rooms_
#define rooms_
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
class room
{
public:
	char* name;
	char* description;
	
	room(char* _cat, char* _description){
		printf("I'm constructing a room");
		name = (char*)malloc(sizeof(char) * 20);
		name = copyname(_cat);	
		description = (char*)malloc(sizeof(char) * 20);
		description = copydescription(_description);
	}
	~room(){
		printf("I'm deconstructing a room");
		free(description);
		free(name);

	}
	char* copyname(char* sth){
		strcpy(name, sth);
		return name;
	}
	char* copydescription(char* sth){

		strcpy(description,sth);
		return description;
	}
	


};








#endif