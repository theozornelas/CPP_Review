

#include "Team.h"

Team::Team()
{
	name.clear();
	key  = 0;
}
Team::Team(int newKey, string newName)
{
	key = newKey;
	name = newName;
}

Team::~Team(){}

int Team::getKey()
{
	return key;
}

string Team::getName()
{
	return name;
}

