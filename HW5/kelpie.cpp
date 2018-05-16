#include "kelpie.h"

kelpie::kelpie(string n)
{
	name = n;
	description = "A large horse emerges from underneath the water.";
	health = 50;
}

string kelpie::getName() const
{
	return name;
}

string kelpie::getDescription() const
{
	return description;
}

string kelpie::basicName() const
{
	return "Trample";
}

int kelpie::getHealth() const
{
	return health;
}

void kelpie::basicAttack(enemy * toAttack)
{
	toAttack->doDamage(1);
}

void kelpie::doDamage(int damage)
{
	health -= damage;
}