//
//  Inventory.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/28/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__Inventory__
#define __SampleClass1__Inventory__

#include "MainShop.h"

class Inventory: public MainShop//access base class data like protected members
{
    private:
        int choice;
        int equipChoiceW;// buy weapon choice
        int equipChoiceA;//buy armor choice
        int equipChoiceP;//buy potions choice
		int sellChoiceW; //sell weapon choice
		int sellChoiceA; //sell armor choice
		int sellChoiceP; //sell potion choice
        int i = 1;
        bool weapon_flag = false;
        bool armor_flag = false;
        int more_options;//display stats
		int equip_or_sell;
	
    public:
        void DisplayInventory(Hero& hero);
        void DisplayStats(Hero& hero);
	
		void potion_use(Hero &hero);
		void potion_sell(Hero &hero);
	
		void weapon_equip(Hero& hero);
		void weapon_sell(Hero &hero);
	
		void armor_equip(Hero& hero);
		void armor_sell(Hero &hero);
};
#endif /* defined(__SampleClass1__Inventory__) */
