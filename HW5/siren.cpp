#include "siren.h"

siren::siren(string n)
{
	name = n;
	description = "A dreadful woman, humming quietly to herself, sits out on the rocks.";
	health = 50;
}

string siren::getName() const
{
	return name;
}

string siren::getDescription() const
{
	return description;
}

string siren::basicName() const
{
	return "Drown";
}

int siren::getHealth() const
{
	return health;
}

void siren::basicAttack(enemy * toAttack)
{
	toAttack->doDamage(1);
}

void siren::doDamage(int damage)
{
	health -= damage;
}