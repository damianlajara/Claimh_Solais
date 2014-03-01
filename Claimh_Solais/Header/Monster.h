//
//  Monster.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/22/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__Monster__
#define __SampleClass1__Monster__

//#include <iostream>
#include "Character.h"

class Monster:
public Character //Hero
{
public:
	Monster();
	Monster(int, int, int, int, int, int); //explicit
	//Monster(int);
	~Monster();
};

#endif /* defined(__SampleClass1__Monster__) */
