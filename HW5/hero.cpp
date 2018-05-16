#include "hero.h"

hero::hero(string n)
{
	name = n;
	health = 50;
	potions = 6;
	fireballs = 10;
	shield = false;
}

string hero::getName() const
{
	return name;
}

string hero::basicName() const
{
	return "Slash";
}

int hero::getHealth() const
{
	return health;
}

void hero::basicAttack(enemy * toAttack)
{
	toAttack->doDamage(10);
}

void hero::doDamage(int damage)
{
	if (shield)
	{
		health -= (damage / 2);
	}
	else
	{
		health -= damage;
	}
}

void hero::addHealth(int heal)
{
	health += heal;
}

string hero::getDescription() const
{
	return "";
}

int& hero::getPotions()
{
	return potions;
}

int& hero::getFireballs()
{
	return fireballs;
}

void hero::changeShield(bool newstatus)
{
	shield = newstatus;
}

bool& hero::getShield()
{
	return shield;
}
