#include "banshee.h"

banshee::banshee(string n)
{
	name = n;
	description = "A ghostly woman is wailing quietly in front of you.";
	health = 50;
}

string banshee::getName() const
{
	return name;
}

string banshee::getDescription() const
{
	return description;
}

string banshee::basicName() const
{
	return "Scream";
}

int banshee::getHealth() const
{
	return health;
}

void banshee::basicAttack(enemy * toAttack)
{
	toAttack->doDamage(1);
}

void banshee::doDamage(int damage)
{
	health -= damage;
}