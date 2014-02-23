//
//  SoldierArmor.h
//  SampleClass1
//
//  Created by Damian Lajara on 2/7/14.
//  Copyright (c) 2014 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__SoldierArmor__
#define __SampleClass1__SoldierArmor__

#include "MainShop.h"

class SoldierArmor: public MainShop
{
	private:
		int choice;
		map <int, Armor> soldier_armor;
		
	public:
		void getSoldierArmor();
		void soldierArmor_Shop(Hero& hero);
		virtual void EnterShop(Hero &hero) override; //Must declare override so you can instantiate objects
		//friend void DisplayInventory(Hero& hero);//Access Weapon Inventory
};

#endif /* defined(__SampleClass1__SoldierArmor__) */
