#ifndef _ENEMY_
#define _ENEMY_

#include <string>

using namespace std;

class enemy
{
public:
	enemy();

	virtual string getName() const = 0;
	virtual string getDescription() const = 0;
	//Basic Attack Move
	//This will be the most common attack the monster makes
	//You are passed a pointer to the monster you are fighting
	virtual void basicAttack(enemy * toAttack) = 0;
	//Print the name of the attack used
	virtual string basicName() const = 0;

	//Health Management
	//A monster at health <= 0 is unconscious
	//This returns the current health level
	virtual int getHealth() const = 0;
	//This function is used by the other monster to
	//either do damage (positive int) or heal (negative int)
	virtual void doDamage(int damage) = 0;
};

#endif