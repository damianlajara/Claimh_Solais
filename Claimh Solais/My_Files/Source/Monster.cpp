//
//  Monster.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/22/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#include "Monster.h"

Monster::Monster(int newHp, int newLevel, int newAttack, int newDef, int newMoney, int newExp)
:/*hp(newHp), level(newLevel), attack(newAttack), defense(newDef)*/Character(newHp, newLevel, newAttack, newDef, newMoney, newExp)
{
	//cout << "\nMonster created using Overloaded function!\n";
	hp = newHp;
	//cout << "Hp is: "<< hp << endl;
	level = newLevel;
	//cout << "level is: " << level << endl;
	attack = newAttack;
	//cout << "Attack is: " << attack << endl;
	defense = newDef;
	//cout << "Defense is: " << defense << endl;
	money = newMoney;
	//cout << "Money is: " << money << endl;
	exp = newExp;
	//cout << "Experience is: "<< exp << "\n" << endl;
}

Monster::~Monster()
{
	//cout << "\nMonster Destroyed";
}
