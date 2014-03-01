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
        int equipChoiceW;//weapons
        int equipChoiceA;//armor
        int equipChoiceP;//potions
        int i = 1;
        bool weapon_flag = false;
        bool armor_flag = false;
        int more_options;
	
    public:
        void DisplayInventory(Hero& hero);
        void DisplayStats(Hero& hero);
    
};
#endif /* defined(__SampleClass1__Inventory__) */
