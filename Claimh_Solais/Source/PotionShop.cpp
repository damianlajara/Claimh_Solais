//
//  PotionShop.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/24/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#include "PotionShop.h"

void PotionShop::potionShop(Hero& hero)
{
    /*this->potion_items = {//name, health, price, value
        {1, Potion("Mommy's Tea", 4, 150, 1)},
        {2, Potion("Antidote of Life", 10, 230, 2)},
        {3, Potion("Red Potion'", 16, 300, 3)},
        {4, Potion("Imperial Regeneration", 24, 550, 4)},
        {5, Potion("Oil of Health", 32, 610, 5)},
        {6, Potion("Holy Light", 40, 690, 6)},
        {7, Potion("Serum of Rejuvination", 52, 750, 7)},
        {8, Potion("Elixir", 60, 900, 8)}
    };*/
	
	this->init_map_values();//Inherits init_map_values from mainshop
	
	this->potion_items = {//name, health, price, value
        {1, Potion("Mommy's Tea",		    map_effect_array[0], map_price_array[0],map_sellValue_array[0], 1)},
        {2, Potion("Antidote of Life",      map_effect_array[1], map_price_array[1],map_sellValue_array[1], 2)},
        {3, Potion("Red Potion'",		    map_effect_array[2], map_price_array[2],map_sellValue_array[2], 3)},
        {4, Potion("Imperial Regeneration", map_effect_array[3], map_price_array[3],map_sellValue_array[3], 4)},
        {5, Potion("Oil of Health",			map_effect_array[4], map_price_array[4],map_sellValue_array[4], 5)},
        {6, Potion("Holy Light",			map_effect_array[5], map_price_array[5],map_sellValue_array[5], 6)},
        {7, Potion("Serum of Rejuvination", map_effect_array[6], map_price_array[6],map_sellValue_array[6], 7)},
        {8, Potion("Elixir",				map_effect_array[7], map_price_array[7],map_sellValue_array[7], 8)}
    };
    
	//Make a random function that gets potions from inventories and puts thhem into treasure chests which are also called randomly
	//Make the potions you take, not pass the hp-For example: If i am lvl 2 and my max hp is 200, and i have 190hp and i get a potion of 50 hp
	//make sure it will fill me to max hp which is 200, not passed it
    
	//Create an inventory for weapons, potions and armor instead of just one inventory
	//Change The gold and Health numbers for potions
    
    this->getPotionShop();//Display potions
    
	//int choice;
	cout << "Select what you would like to buy, or enter 9 to quit!\n";
	cin >> choice;
	switch (choice)
	{
        case 1:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 1)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 2:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 2)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 3:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 3)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 4:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 4)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 5:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 5)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 6:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 6)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 7:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 7)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 8:
            for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
            {
                if(iter->first == 8)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_potion(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        hero.setHp(hero.getHp() + iter->second._health);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< potion_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->potionShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 9: cout << "Exiting Potion shop...\n\n";
            break;
            
        default:
            cout << "Error! You have entered an invalid answer\nPlease try again";
            this->potionShop(hero);
	}
}

void PotionShop::getPotionShop()
{
    //Display Choices
	for (map <int, Potion>::iterator iter = potion_items.begin(); iter != potion_items.end(); iter++)
	{
        cout << iter->first << ") ";
		cout << iter->second._name << endl << "Health: +" << iter->second._health << endl;
        cout << "Price: " << iter->second._price << " Gold\n" << endl;
        //iterator->first = key
        // iterator->second = value
	}
}

void PotionShop::EnterShop(Hero& hero)
{
    cout << "Welcome "<< hero.getName()<< ", to the Claimh Solais Potion Shop\n";
    PotionShop Potion;
    Potion.potionShop(hero);
    //Potion.potionShop(hero);
    //MainShop *potionShop = &Potion;
    // calling soldierShop
    //potionShop->potionShop(hero);
}