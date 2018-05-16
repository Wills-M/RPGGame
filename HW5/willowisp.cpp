#include "willowisp.h"

willowisp::willowisp(string n)
{
	name = n;
	description = "You see a floating light that appears to suck the brightness from the world around it.";
	health = 50;
}

string willowisp::getName() const
{
	return name;
}

string willowisp::getDescription() const
{
	return description;
}

string willowisp::basicName() const
{
	return "Flash";
}

int willowisp::getHealth() const
{
	return health;
}

void willowisp::basicAttack(enemy * toAttack)
{
	toAttack->doDamage(1);
}

void willowisp::doDamage(int damage)
{
	health -= damage;
}