//
//  ArcherArmor.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 2/7/14.
//  Copyright (c) 2014 Damian Lajara. All rights reserved.
//

#include "ArcherArmor.h"
void ArcherArmor::ArcherArmor_Shop(Hero& hero)
{
    /*this->archer_armor = {//name, damage, price
        {1, Armor("Nightmare", 4, 150, 1)},
        {2, Armor("Ashura", 10, 230, 2)},
        {3, Armor("Ichimonji", 16, 300, 3)},
        {4, Armor("Lionheart", 24, 550, 4)},
        {5, Armor("Ascalon", 32, 610, 5)},
        {6, Armor("Nirvana", 40, 690, 6)},
        {7, Armor("Chaotic Axis", 52, 750, 7)},
        {8, Armor("Ominous Judgement", 60, 900, 8)}
    };*/
	
    this->init_map_values();//Inherits init_map_values from mainshop
	
	this->archer_armor = {//name, damage, price
        {1, Armor("Nightmare", map_effect_array[0], map_price_array[0],map_sellValue_array[0], 1)},
        {2, Armor("Ashura",    map_effect_array[1], map_price_array[1],map_sellValue_array[1], 2)},
        {3, Armor("Ichimonji", map_effect_array[2], map_price_array[2],map_sellValue_array[2], 3)},
        {4, Armor("Lionheart", map_effect_array[3], map_price_array[3],map_sellValue_array[3], 4)},
        {5, Armor("Ascalon",   map_effect_array[4], map_price_array[4],map_sellValue_array[4], 5)},
        {6, Armor("Nirvana",   map_effect_array[5], map_price_array[5],map_sellValue_array[5], 6)},
        {7, Armor("Chaotic Axis", map_effect_array[6], map_price_array[6],map_sellValue_array[6], 7)},
        {8, Armor("Ominous Judgement", map_effect_array[7], map_price_array[7],map_sellValue_array[7], 8)}
    };
	
    //Able to check private data of hero i.e My_class because its a friend
	//check class
	if (hero.My_class != "Archer")
	{
		cout << "\nNote: You can only buy from this category if you are of a Archer class\n";
		cout << "...\nSorry, you are not of type Archer class, therefore you cannot buy Archer related items.\n";
        MainShop::mainShop(hero);
        return;
	}
    
    //this->getArcherArmor();
    this->getArcherArmor();//DISPLAYS THE armor MAP
    
	cout << "Select what you would like to buy, or enter 9 to quit!\n";
	cin >> choice;
	switch (choice)
	{
        case 1:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 1)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a armor, you cannot buy it again
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 2:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 2)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 3:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 3)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 4:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 4)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 5:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 5)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 6:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 6)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 7:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 7)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 8:
            for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
            {
                if(iter->first == 8)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this armor\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->ArcherArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 9: cout << "Exiting Armor shop...\n";
            break;
            
        default:
            cout << "Error! You have entered an invalid answer\nPlease try again" << endl;
            this->ArcherArmor_Shop(hero);
	}
}

void ArcherArmor::getArcherArmor()
{
    //Display Choices
	for (map <int, Armor>::iterator iter = archer_armor.begin(); iter != archer_armor.end(); iter++)
	{
        cout << iter->first << ") ";
		cout << iter->second._name << endl << "Defense: " << iter->second._defense << endl;
        cout << "Price: " << iter->second._price << " Gold\n" << endl;
        //iterator->first = key
        // iterator->second = value
	}
}

void ArcherArmor::EnterShop(Hero& hero)
{
    cout << "Welcome "<< hero.getName()<< ", to the Claimh Solais Armor Shop\n" << endl;
    ArcherArmor armor_soldier;
    armor_soldier.ArcherArmor_Shop(hero);
    //ArcherArmor Sword;
    //Sword.ArcherArmor_Shop(hero);
    //MainShop *ArcherArmor = &Sword;
    // calling ArcherArmor_Shop
    //ArcherArmor->EnterShop(hero);
    
}//Instance automatically deleted here at end of scope
