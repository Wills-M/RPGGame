#ifndef _WILLOWISP_
#define _WILLOWISP_

#include <string>
#include "enemy.h"

using namespace std;

class willowisp : public enemy
{
private:
	string name;
	string description;
	int health;
public:
	willowisp(string n = "No Name");
	string getName() const;
	string getDescription() const;
	void basicAttack(enemy * toAttack);
	string basicName() const;
	int getHealth() const;
	void doDamage(int damage);
	void resetHealth();
};

#endif