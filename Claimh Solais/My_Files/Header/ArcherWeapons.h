//
//  ArcherWeapons.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/23/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__ArcherWeapons__
#define __SampleClass1__ArcherWeapons__

#include "MainShop.h"

class ArcherWeapons: public MainShop
{
    private:
        int choice2;
		map <int, Weapon> archer_weapons;
        
    public:
        void getArcherWeapons();
        void ArcherShop(Hero& hero);
        virtual void EnterShop(Hero &hero) override;
};
#endif /* defined(__SampleClass1__ArcherWeapons__) */
