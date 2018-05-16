#ifndef _KELPIE_
#define _KELPIE_

#include <string>
#include "enemy.h"

using namespace std;

class kelpie : public enemy
{
private:
	string name;
	string description;
	int health;
public:
	kelpie(string n = "No Name");
	string getName() const;
	string getDescription() const;
	void basicAttack(enemy * toAttack);
	string basicName() const;
	int getHealth() const;
	void doDamage(int damage);
	void resetHealth();
};

#endif