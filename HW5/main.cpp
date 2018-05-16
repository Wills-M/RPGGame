#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "enemy.h"
#include "banshee.h"
#include "blackshuck.h"
#include "hero.h"
#include "kelpie.h"
#include "siren.h"
#include "willowisp.h"

using namespace std;

void status(hero & stat);
void battle(enemy & toBattle, hero & stat);

void main()
{
	srand(time(NULL));

	string name;
	int enemies;

	cout << "Please enter a name for your hero: ";
	cin >> name;

	hero player = hero(name);

	cout << "How many enemies would you like to fight? ";
	cin >> enemies;

	for (int i = 0; i < enemies; i++)
	{
		int x = rand() % 5;
		switch (x)
		{
			case 0:
			{
				kelpie mon = kelpie("Kelpie");
				battle(mon, player);
				break;
			}
			case 1:
			{
				banshee mon = banshee("Banshee");
				battle(mon, player);
				break;
			}
			case 2:
			{
				willowisp mon = willowisp("Will o' the Wisp");
				battle(mon, player);
				break;
			}
			case 3:
			{
				blackshuck mon = blackshuck("Black Shuck");
				battle(mon, player);
				break;
			}
			case 4:
			{
				siren mon = siren("Siren");
				battle(mon, player);
				break;
			}
		}
		if (player.getHealth() <= 0)
			goto stop;
	}
	if (player.getHealth() >= 0)
	{
	stop:
		cout << "You died!" << endl;
	}
	else
		cout << "You killed all the monsters!" << endl;
}

void status(hero & stat)
{
	cout << stat.getName() << " " << stat.getHealth() << "/50 health remaining - " << stat.getFireballs() << " Fireballs, " << stat.getPotions() << " Potions." << endl;
}

void battle(enemy & toBattle, hero & stat)
{
	string command;
	enemy * ptr = &toBattle;
	cout << toBattle.getDescription() << endl;
	while (toBattle.getHealth() > 0)
	{
		status(stat);
		cout << "Enter Command: sword shield fireball potion exit ";
		cin >> command;
		if (command == "sword")
		{
			stat.basicAttack(ptr);
			cout << "You slash the monster." << endl;
		}
		else if (command == "shield")
		{
			stat.changeShield(!stat.getShield());
			cout << "You hide behind your shield." << endl;
		}
		else if (command == "fireball")
		{
			stat.getFireballs() -= 1;
			toBattle.doDamage(15);
			cout << "You use a fireball." << endl;
		}
		else if (command == "potion")
		{
			stat.getPotions() -= 1;
			stat.addHealth(5);
			cout << "You use a potion." << endl;
		}
		else if (command == "exit")
			break;
		else
		{
			cout << "error";
		}
		if (toBattle.getHealth() <= 0)
			break;
		ptr = &stat;
		if (toBattle.getName() == "Black Shuck")
		{
			if (rand() % 2 == 0)
			{
				cout << toBattle.getName() << " uses " << toBattle.basicName() << endl;
				toBattle.basicAttack(ptr);
			}
			else
			{
				cout << "Black Shuck uses Bite" << endl;
				stat.doDamage(5);
			}
		}
		else
		{
			cout << toBattle.getName() << " uses " << toBattle.basicName() << endl;
		toBattle.basicAttack(ptr);
		}
		if (stat.getHealth() <= 0)
			goto stop;
		stat.getShield() = false;
	}
stop:;
}