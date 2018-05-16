#ifndef _BLACKSHUCK_
#define _BLACKSHUCK_

#include <string>
#include "enemy.h"

using namespace std;

class blackshuck : public enemy
{
private:
	string name;
	string description;
	int health;
public:
	blackshuck(string n = "No Name");
	string getName() const;
	string getDescription() const;
	void basicAttack(enemy * toAttack);
	string basicName() const;
	int getHealth() const;
	void doDamage(int damage);
	void resetHealth();
};

#endif