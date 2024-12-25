/*
 * Team.h
 *
 *  Created on: Mar 3, 2016
 *      Author: osvaldo
 */

#ifndef TEAM_H_
#define TEAM_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Team
{
public:
	Team();

	Team(int newKey, string newName);

	~Team();

	int getKey();

	string getName();

struct comparator
{
	bool operator()(const Team& t1, const Team& t2) const
	{
		return t1.key < t2.key;
	}
};

private:
	int key;
	string name;
};



#endif /* TEAM_H_ */
