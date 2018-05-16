#include "blackshuck.h"

blackshuck::blackshuck(string n)
{
	name = n;
	description = "A large, menacing, black dog approaches you.";
	health = 50;
}

string blackshuck::getName() const
{
	return name;
}

string blackshuck::getDescription() const
{
	return description;
}

string blackshuck::basicName() const
{
	return "Slash";
}

int blackshuck::getHealth() const
{
	return health;
}

void blackshuck::basicAttack(enemy * toAttack)
{
	toAttack->doDamage(1);
}

void blackshuck::doDamage(int damage)
{
	health -= damage;
}