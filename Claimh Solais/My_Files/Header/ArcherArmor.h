//
//  ArcherArmor.h
//  SampleClass1
//
//  Created by Damian Lajara on 2/7/14.
//  Copyright (c) 2014 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__ArcherArmor__
#define __SampleClass1__ArcherArmor__

#include "MainShop.h"

class ArcherArmor: public MainShop
{
	private:
		int choice;
		map <int, Armor> archer_armor;
		
	public:
		void getArcherArmor();
		void ArcherArmor_Shop(Hero& hero);
		virtual void EnterShop(Hero &hero) override; //Must declare override so you can instantiate objects
		//friend void DisplayInventory(Hero& hero);//Access Weapon Inventory
};


#endif /* defined(__SampleClass1__ArcherArmor__) */
