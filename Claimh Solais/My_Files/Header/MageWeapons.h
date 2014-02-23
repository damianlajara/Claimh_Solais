//
//  MageWeapons.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/23/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__MageWeapons__
#define __SampleClass1__MageWeapons__

#include "MainShop.h"

class MageWeapons: public MainShop
{
    private:
        int choice1;
		map <int, Weapon> mage_weapons;
    
    public:
        void getMageWeapons();
        void MageShop(Hero& hero);
        virtual void EnterShop(Hero &hero) override;
};

#endif /* defined(__SampleClass1__MageWeapons__) */
