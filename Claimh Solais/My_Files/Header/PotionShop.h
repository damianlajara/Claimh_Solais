//
//  PotionShop.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/24/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__PotionShop__
#define __SampleClass1__PotionShop__

#include "MainShop.h"

class PotionShop: public MainShop//inherits from mainshop
{
    private:
        int choice;
		map <int, Potion> potion_items;
	
    public:
        void getPotionShop();
        void potionShop(Hero& hero);
        virtual void EnterShop(Hero &hero) override;
};

#endif /* defined(__SampleClass1__PotionShop__) */
