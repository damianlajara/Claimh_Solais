//
//  Character.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/22/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#include "Character.h"

Character::Character() : level(0), hp(0), attack(0), defense(0), money(0), exp(0) {}//Initialize all variables

//Character::Character(int seed)
//{
//
//}

Character::Character(int health, int lvl, int att, int def, int mon, int experience)
: level(lvl), hp(health), attack(att), defense(def), money(mon), exp(experience) {}//Initalizer list - set variable equal to parameters


Character::~Character()
{
	//cout << "Character has been destroyed!\n";
}

void Character::setAttack(int att)
{
    attack = att;
}


void Character::setDefense(int def)
{
    defense = def;
}

void Character::setHp(int health)
{
    hp = health;
}

void Character::setExp(int experience)
{
	exp = experience;
}

void Character::damageTaken(int damage)
{
    hp -= damage;
}

void Character::setlevel(int lvl)
{
    level = lvl;
}

void Character::setMoney(int mon)
{
    money= mon;
}