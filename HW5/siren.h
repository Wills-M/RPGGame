#ifndef _SIREN_
#define _SIREN_

#include <string>
#include "enemy.h"

using namespace std;

class siren : public enemy
{
private:
	string name;
	string description;
	int health;
public:
	siren(string n = "No Name");
	string getName() const;
	string getDescription() const;
	void basicAttack(enemy * toAttack);
	string basicName() const;
	int getHealth() const;
	void doDamage(int damage);
	void resetHealth();
};

#endif