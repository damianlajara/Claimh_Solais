//
//  MainShop.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/22/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

/***EVERY COMMENT WITH TEST IS FOR EQUIPPING A WEAPON (HASHMAP)***/
//9 IN TOTAL!

//Make sure every name in every map is accurate
//ie: Claimh Solais should be like the last ultimate weapon
//Fix all the numbers-the gold, attack and everything. Make the ratios good


#include "MainShop.h"
#include "SoldierWeapons.h"//include this in order to create instances of classes
#include "MageWeapons.h"
#include "ArcherWeapons.h"
#include "PotionShop.h"
#include "SoldierArmor.h"
#include "MageArmor.h"
#include "ArcherArmor.h"

//declare objects here so i can use them in functions
Weapon equipped_weapon;
Armor equipped_armor;

//Implement static variables
vector <Armor> MainShop::armor_inventory;
vector <Potion> MainShop::potion_inventory;
vector <Weapon> MainShop::weapon_inventory;
void MainShop::mainShop(Hero& hero)
{
    //Polymorphism
    //Declare pointer of base class equal to address of derived class object
    
    //NOTE:
    //If you have a pure virtual function declaration in the base class
    //you cannot instantiate objects since its an abstract class
    
    SoldierWeapons sword;
    MageWeapons spell;
    ArcherWeapons bow;
    PotionShop potion;
    SoldierArmor armor_soldier;
    MageArmor armor_mage;
    ArcherArmor armor_archer;
    
    MainShop *SoldierWeaponsPtr = &sword;
    MainShop *Soldier_ArmorShopPtr = &armor_soldier;
    
    MainShop *SpellShopPtr = &spell;
    MainShop *Mage_ArmorShopPtr = &armor_mage;
    
    MainShop *ArcherWeaponsPtr = &bow;
    MainShop *Archer_ArmorShopPtr = &armor_archer;
    
    MainShop *PotionShopPtr = &potion;
    
    cout << "\nDo you wish to Enter the shop? (Y/N)\n";
	cin >> enter;
	if ((enter == 'Y') || (enter == 'y'))
	{
        
		cout << "Welcome to the Claimh Solais Shop!\nThis is where your hard work and dedication pay off!\n";
        
		//MyMap[maps.dungeon_lvl] = Monster_Dungeon1;
		//cout << Maps.begin()->first<<endl;
		//cout << Maps.begin()->second<<endl;
        
		if (hero.getMoney() > 0)//Check to see if broke
		{
            
			cout << "What are you looking for?\n\n";
			cout << "1) Weapons\n2) Armor\n3) Potions\n" << endl;
			cin >> choice1;
            
            cout << "Your current gold is: " << hero.getMoney() << endl;
			if (choice1 == 1)//Weapons
			{
				cout << "What type of weapon are you looking for??\n\n";
				cout << "1) Swords\n2) SpellBooks\n3) Bows\n";
				cin >> choice;
                
				//Display Choices
				switch (choice)
				{
                    case 1: SoldierWeaponsPtr->EnterShop(hero); //Swords
                        break;
                    case 2:SpellShopPtr->EnterShop(hero);//Staffs
                        break;
                    case 3:ArcherWeaponsPtr->EnterShop(hero);//Bows
                        break;
                    default: cout << "Error!, Please try again.";
                        this->mainShop(hero);
				}
			}
            
			else if (choice1 == 2)//Armor
			{
				cout << "What type of Armor are you looking for??\n\n";
				cout << "1) Soldier Armor\n2) Mage Armor\n3) Archer Armor\n";
				cin >> choice;
                
				//Display Choices
				switch (choice)
				{
                    case 1: Soldier_ArmorShopPtr->EnterShop(hero);//SoldierArmor(hero);
                        break;
                    case 2: Mage_ArmorShopPtr->EnterShop(hero);//MageArmor(hero);
                        break;
                    case 3: Archer_ArmorShopPtr->EnterShop(hero);//ArcherArmor(hero);
                        break;
                    default: cout << "Error!, Please try again.";
                        this->mainShop(hero);
				}
			}
            
			else if (choice1 == 3)//Potions
			{
				
                PotionShopPtr->EnterShop(hero);
				//Use this block of code when i create more potion shops for attack and defense
				/*cout << "What type of Potions are you looking for??\n\n";
                 cout << "1) Health Potions\n2) Defense Potions\n3) Attack Potions\n";
                 cin >> choice;
                 
                 //Display Choices
                 switch (choice)
                 {
                 case 1: SoldierArmor(hero);
                 break;
                 
                 case 2: MageArmor(hero);
                 break;
                 case 3: ArcherArmor(hero);
                 break;
                 default: cout << "Error!, Please try again.";
                 shop(hero);
                 }*/
			}
			else
			{
				cout << "ERROR! Try again!";
                this->mainShop(hero);
			}
            
		}
        
		else
		{
			cout << "You do not have enough money to buy anything\n";
			cout << "...\nYou have been kicked out of the shop!";
		}
        
	}
    
	else
		cout << "Equipment this rare hardly comes in. Your missing out on a lot!\n";
	//automatically exits shop
}

void MainShop::display_weapons()
{
    for (vector <Weapon>::iterator iter = weapon_inventory.begin(); iter != weapon_inventory.end(); iter++){cout << iter->_value << ") " << iter->_name << endl;}

}

void MainShop::display_armor()
{
    for (vector <Armor>::iterator iter = armor_inventory.begin(); iter != armor_inventory.end(); iter++){cout << iter->_value << ") " << iter->_name << endl;}
    
}

void MainShop::display_potions()
{
    for (vector <Potion>::iterator iter = potion_inventory.begin(); iter != potion_inventory.end(); iter++){cout << iter->_value << ") " << iter->_name << endl;}
    
}

void MainShop::add_weapon(Weapon weapon)
{
    weapon_inventory.push_back(weapon);
}

void MainShop::add_armor(Armor armor)
{
    armor_inventory.push_back(armor);
}

void MainShop::add_potion(Potion potion)
{
    potion_inventory.push_back(potion);
}

Weapon MainShop::Equipped_weapon(){
    return equipped_weapon;
}

Armor MainShop::Equipped_armor(){
    return equipped_armor;
}

bool MainShop::equip_weapon(string& name) const
{
    auto match = find_if(weapon_inventory.begin(), weapon_inventory.end(),[&name](const Weapon& weapon){return weapon._name == name;});
    if (match != weapon_inventory.end())//if it found a match
    {
        if(equipped_weapon._name == name)//check to see if weapon is already equipped
        {
            cout << "\nError! You already have this weapon equipped!";
            return false;
        }
        equipped_weapon = *match;
        return true;
    }
    else {
        return false; // Weapon not available
    }
    
}

bool MainShop::equip_armor(string& name) const
{
    auto match = find_if(armor_inventory.begin(), armor_inventory.end(),[&name](const Armor& armor){return armor._name == name;});
    if (match != armor_inventory.end())//if it found a match
    {
        if(equipped_armor._name == name)//check to see if armor is already equipped
        {
            cout << "\nError! You already have this armor equipped!";
            return false;
        }
        equipped_armor = *match;
        return true;
    }
    else {
        return false; // Armor not available
    }
    
}