//
//  MageWeapons.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/23/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#include "MageWeapons.h"

void MageWeapons::MageShop(Hero& hero)
{
     this->mage_weapons = {//name, damage, price
        {1, Weapon("Neil Vajra", 4, 150, 1)},
        {2, Weapon("Brionac", 10, 230, 2)},
        {3, Weapon("Claimh Solais", 16, 300, 3)},
        {4, Weapon("Durandal", 24, 550, 4)},
        {5, Weapon("Kusanagi", 32, 610, 5)},
        {6, Weapon("Tizona", 40, 690, 6)},
        {7, Weapon("Zulfiqar", 52, 750, 7)},
        {8, Weapon("Orcrist", 60, 900, 8)}
    };
    
	//check class
	if (hero.My_class != "Mage")
	{
		cout << "\nNote:You can only buy from this category if you are of a Mage class\n";
		cout << "...\nSorry, you are not of type Mage class, therefore you cannot buy Mage related items.\n";
        MainShop::mainShop(hero);
        return;//returns to main control loop
	}
    
    this->getMageWeapons();
    
	cout << "Select what you would like to buy, or enter 9 to quit!\n";
	cin >> choice1;
	switch (choice1)
	{
        case 1:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 1)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 2:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 2)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 3:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 3)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 4:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 4)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 5:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 5)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 6:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 6)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 7:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 7)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 8:
            for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
            {
                if(iter->first == 8)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->MageShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 9: cout << "Exiting SpellBook shop...\n\n";
            break;
            
        default:
            cout << "Error! You have entered an invalid answer\nPlease try again";
            this->MageShop(hero);
	}
}

void MageWeapons::getMageWeapons()
{
    //Display Choices
	for (map <int, Weapon>::iterator iter = mage_weapons.begin(); iter != mage_weapons.end(); iter++)
	{
        cout << iter->first << ") ";
		cout << iter->second._name << endl << "Attack: " << iter->second._damage << endl;
        cout << "Price: " << iter->second._price << " Gold\n" << endl;
        //iterator->first = key
        // iterator->second = value
	}
}

void MageWeapons::EnterShop(Hero& hero)
{
    cout << "Welcome "<< hero.getName()<< ", to the Claimh Solais Spell Shop\n";
    MageWeapons spell;
    spell.MageShop(hero);
    //MageWeapons Spell;
    //Spell.MageShop(hero);
    //MainShop *spellShop = &Spell;
    // calling soldierShop
    //spellShop->EnterShop(hero);
}