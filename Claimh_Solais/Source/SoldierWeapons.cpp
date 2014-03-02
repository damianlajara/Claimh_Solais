//
//  SoldierWeapons.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/23/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//


#include "SoldierWeapons.h"
//MainShop shop;
void SoldierWeapons::soldierShop(Hero& hero)
{
	/*this->soldier_weapons = {//name, damage, price
        {1, Weapon("Meito Ichimonji", 4, 150, 1)},
        {2, Weapon("Shusui", 10, 230, 2)},
        {3, Weapon("Apocalypse", 16, 300, 3)},
        {4, Weapon("Blade of Scars", 24, 550, 4)},
        {5, Weapon("Ragnarok", 32, 610, 5)},
        {6, Weapon("Eternal Darkness", 40, 690, 6)},
        {7, Weapon("Masamune", 52, 750, 7)},
        {8, Weapon("Soul Calibur", 60, 900, 8)}
    };*/
	
	this->init_map_values();//Inherits init_map_values from mainshop
	
	this->soldier_weapons = {//name, damage, price
        {1, Weapon("Meito Ichimonji",  map_effect_array[0], map_price_array[0],map_sellValue_array[0], 1)},
        {2, Weapon("Shusui",		   map_effect_array[1], map_price_array[1],map_sellValue_array[1], 2)},
        {3, Weapon("Apocalypse",	   map_effect_array[2], map_price_array[2],map_sellValue_array[2], 3)},
        {4, Weapon("Blade of Scars",   map_effect_array[3], map_price_array[3],map_sellValue_array[3], 4)},
        {5, Weapon("Ragnarok",		   map_effect_array[4], map_price_array[4],map_sellValue_array[4], 5)},
        {6, Weapon("Eternal Darkness", map_effect_array[5], map_price_array[5],map_sellValue_array[5], 6)},
        {7, Weapon("Masamune",		   map_effect_array[6], map_price_array[6],map_sellValue_array[6], 7)},
        {8, Weapon("Soul Calibur",     map_effect_array[7], map_price_array[7],map_sellValue_array[7], 8)}
    };
	/*
	//Use this version to work on windows!
	soldier_weapons[1] = Weapon("Meito Ichimonji", 4, 150, 1);
	soldier_weapons[2] = Weapon("Shusui", 10, 230, 2);
	soldier_weapons[3] = Weapon("Apocalypse", 16, 300, 3);
	soldier_weapons[4] = Weapon("Blade of Scars", 24, 550, 4);
	soldier_weapons[5] = Weapon("Ragnarok", 32, 610, 5);
	soldier_weapons[6] = Weapon("Eternal Darkness", 40, 690, 6);
	soldier_weapons[7] = Weapon("Masamune", 52, 750, 7);
	soldier_weapons[8] = Weapon("Soul Calibur", 60, 900, 8);
	*/
	
	
	//check class
	if (hero.My_class != "Soldier")
	{
		cout << "\nNote: You can only buy from this category if you are of a soldier class\n";
		cout << "...\nSorry, you are not of type soldier class, therefore you cannot buy soldier related items.\n";
        MainShop::mainShop(hero);
        return;
	}
    
    //this->getSoldierWeapons();
    this->getSoldierWeapons();//Display choices
    
	cout << "Select what you would like to buy, or enter 9 to quit!\n";
	cin >> choice;
	switch (choice)
	{
        case 1:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 1)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);//Do not set attack, since user never equipped it
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 2:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 2)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 3:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 3)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 4:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 4)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 5:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 5)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 6:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 6)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 7:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 7)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 8:
            for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
            {
                if(iter->first == 8)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_weapon(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        //hero.setAttack(hero.getAttack() + iter->second._damage);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< weapon_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 9: cout << "Exiting Sword shop...\n";
            break;
            
        default:
            cout << "Error! You have entered an invalid answer\nPlease try again" << endl;
            this->soldierShop(hero);
	}
}

void SoldierWeapons::getSoldierWeapons()
{
    //Display Choices
	for (map <int, Weapon>::iterator iter = soldier_weapons.begin(); iter != soldier_weapons.end(); iter++)
	{
        cout << iter->first << ") ";
		cout << iter->second._name << endl << "Attack: " << iter->second._damage << endl;
        cout << "Price: " << iter->second._price << " Gold\n" << endl;
        //iterator->first = key
        // iterator->second = value
	}
}

void SoldierWeapons::EnterShop(Hero& hero)
{
    cout << "Welcome "<< hero.getName()<< ", to the Claimh Solais Sword Shop\n" << endl;
    SoldierWeapons sword;
    sword.soldierShop(hero);
    //SoldierWeapons Sword;
    //Sword.soldierShop(hero);
    //MainShop *swordShop = &Sword;
    // calling soldierShop
    //swordShop->EnterShop(hero);
    
}//Instance automatically deleted here at end of scope