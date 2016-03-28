#include "Room.h"
#include "Exits.h"
#include "Player.h"
#include "World.h"

void createworld(){

	//Create all rooms with name and description!
	room room1("Yellow brick path", "All you can see from here is just a yellow brick path that goesa to the south");
	room room2("Candy House", "OMG! It is a house made out of candy it looks delicious!");
	room room3("Seven Dwarf House", "This house is somehow strangely small but a regular size person can fit in.");
	room room4("Mine", "There are all sort of minerals and tools here. Wait are those diamonds?");
	room room5("Tom Thumb Garden", "nametest");
	room room6("Tom Thumb House", "This house is really big for someone who isn't bigger than your thumb.");
	room room7("Troll bridge", "nametest");
	room room8("Forest", "nametest");
	room room9("Castle Garden", "nametest");
	room room10("Castle", "nametest");
	room room11("Wonderland Castle", "nametest");
	
	//Create all exits (name,description,direction,source,destiny,open)
	room* a = &room1;
	room* b = &room2;
	room* c = &room3;
	room* d = &room4;
	room* e = &room5;
	room* f = &room6;
	room* g = &room7;
	room* h = &room8;
	room* i = &room9;
	room* j = &room10;
	room* k = &room11;

	exits exit1("name", "description", "direction", a, b, true);//Path->Candy
	exits exit2("name", "description", "direction", b, a, true);//Candy->Path
	exits exit3("name", "description", "direction", b, c, true);//Candy->DwarfHouse
	exits exit4("name", "description", "direction", b, g, true);//Candy->TrollBridge
	exits exit5("name", "description", "direction", b, e, true);//Candy->TomThumbGarden
	exits exit6("name", "description", "direction", e, b, true);//TomThumbGarden->Candy
	exits exit7("name", "description", "direction", e, f, false);//TomThumbGarden->House
	exits exit8("name", "description", "direction", f, e, true);//House->Garden
	exits exit9("name", "description", "direction", a, b, true);
	exits exit10("name", "description", "direction", a, b, true);
	exits exit11("name", "description", "direction", a, b, true);
	exits exit12("name", "description", "direction", a, b, true);
	exits exit13("name", "description", "direction", a, b, true);
	exits exit14("name", "description", "direction", a, b, true);
	exits exit15("name", "description", "direction", a, b, true);
	exits exit16("name", "description", "direction", a, b, true);
	exits exit17("name", "description", "direction", a, b, true);
	exits exit18("name", "description", "direction", a, b, true);
	exits exit19("name", "description", "direction", a, b, true);
	exits exit20("name", "description", "direction", a, b, true);
}