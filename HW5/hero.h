#ifndef _HERO_
#define _HERO_

#include <string>
#include "enemy.h"

using namespace std;

class hero : public enemy
{
private:
	string name;
	int health;
	int potions;
	int fireballs;
	bool shield;
public:
	hero(string n = "No Name");
	string getName() const;
	void basicAttack(enemy * toAttack);
	string basicName() const;
	int getHealth() const;
	void doDamage(int damage);
	void addHealth(int heal);
	string getDescription() const;
	int& getPotions();
	int& getFireballs();
	void changeShield(bool newstatus);
	bool& getShield();
};

#endif