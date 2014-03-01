//
//  main.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/20/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//
#include <iostream>
#include "Hero.h"
#include "MainShop.h"
#include "SoldierWeapons.h"

int main()
{
    //srand
    //PolyMorphism
    //Since MainShop is an abstract class you cant make objects from it
    //Have to create pointers of derived classes to access mainshop virtual function
    Hero hero(100,1,40,40);//hp,level,attack,defense
    Monster m(100,1,10,20,150,100 /*hp,lvl,att,def,mon,exp*/ ); //Dungeon level 1 monster
	Monster m1(150,2,50,30,230,300);//Dungeon level 2 monster
	Monster m2(300,3,120,60,360,500);//Dungeon level 3 monster
	Monster m3(350,4,160,80,490,950);//Dungeon level 4 monster
	Monster m4(500,5,210,110,530,1500);//Dungeon level 5 monster
	Monster m5(650,6,340,150,660,2000);//Dungeon level 6 monster
	Monster m6(750,7,410,220,770,3000);//Dungeon level 7 monster
	Monster m7(900,8,600,300,830,5000);//Dungeon level 8 monster
	Monster m8(1200,9,750,450,960,8000);//Dungeon level 9 monster
	Monster m9(2000,10,1000,600,1090,10000);//Dungeon level 10 monster
    
    hero.Customize();
    hero.GamePlay(hero, m, m1, m2, m3, m4, m5, m6, m7, m8, m9);
    
	return 0;
}