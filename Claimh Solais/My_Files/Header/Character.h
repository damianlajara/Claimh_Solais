//
//  Character.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/22/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__Character__
#define __SampleClass1__Character__

#include <iostream>
using namespace std;

class Character
{
    
protected://not private, so derived class can use it
	int level;
	int hp;
	int attack;
	int defense;
	int money;
	int exp;
	int max_hp;//since i dont want monsters having max_hp, i didnt add it to the constructor!
	
	Character(); // zero everything by default
	//Character(int); // randomly generate everything
	Character(int, int, int, int, int, int); // populate explicitly
	~Character();
	
    
public:
	int getAttack() const { return attack; }
	int getDefense() const { return defense; }
	int getHp() const { return hp; }
	int get_maxHp() const { return max_hp;}
	int getlevel() const { return level; }
	int getMoney() const { return money; }
	int getExp() const { return exp; }
    
	void setAttack(int);
	void setDefense(int);
	//void setStrength(int);
	void setHp(int);
	void set_maxHp(int);
	void setlevel(int);
	void setMoney(int);
	void setExp(int);
	void damageTaken(int);
};

#endif /* defined(__SampleClass1__Character__) */
