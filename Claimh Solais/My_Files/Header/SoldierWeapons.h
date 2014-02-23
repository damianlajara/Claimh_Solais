//
//  SoldierWeapons.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/23/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__SoldierWeapons__
#define __SampleClass1__SoldierWeapons__

#include "MainShop.h"

class SoldierWeapons: public MainShop
{
    private:
        int choice;
		map <int, Weapon> soldier_weapons;
	
    public:
        void getSoldierWeapons();
        void soldierShop(Hero& hero);
        virtual void EnterShop(Hero &hero) override; //Must declare override so you can instantiate objects
    //friend void DisplayInventory(Hero& hero);//Access Weapon Inventory
};

#endif /* defined(__SampleClass1__SoldierWeapons__) */
