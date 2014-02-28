//
//  Hero.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/20/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__Hero__
#define __SampleClass1__Hero__
#include "Character.h"
#include "Monster.h"
//#include "MainShop.h"
//#include "Inventory.h"

class Hero:public Character
{
    //Has access to hero private data (i.e My_class)
    friend class SoldierWeapons;
    friend class MageWeapons;
    friend class ArcherWeapons;
    friend class SoldierArmor;
    friend class MageArmor;
    friend class ArcherArmor;
private:
    string name;
    int gender_choice;
    string gender;
    string My_class;
    //string previous_class;/*keep record of class before user changes in options menu*/
    int DungeonFloor;
    int RandMonsters;
    bool leveled_up[9];
    int level_increase;
    int stat_increase[9];
    bool exit = true;
    char option;
    bool skip = false;
    int option_choice;
    int skip_choice;
    int class_choice;
    int choice;
    int name_choice;
    void initialize_hero();
    
public:
	Hero();
	Hero(int, int, int, int);
	~Hero();
    
    string getName(){return name;}
    string getMy_class(){return My_class;}
    int getDungeonFloor(){return DungeonFloor;}
    void setDungeonFloor(int f);
    int getRandMonsters(){return RandMonsters;}
    void setRandMonsters(int r);
    
	int reset_max_hp();
    void AdvanceNextDungeonLevel();//Advance to next floor
    void SetDungeonLevel();//set monsters for every level
    void Customize();
    void option_menu();
    
    void Dungeon(Hero& hero, Monster& m, Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9);
    void RandDBattle(Monster& m, Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9, int roll);
    
    //void DisplayInventory();
    void Battle(Monster& m);
    void CheckExp();
    void Checklevel();
    
    void GamePlay(Hero& hero, Monster& m, Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9);
    
    void CheckBattle(Monster& m, Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9);
    
    
    
};

#endif /* defined(__SampleClass1__Hero__) */
