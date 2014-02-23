//
//  MageArmor.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 2/7/14.
//  Copyright (c) 2014 Damian Lajara. All rights reserved.
//

#include "MageArmor.h"
void MageArmor::MageArmor_Shop(Hero& hero)
{
     this->mage_armor = {//name, damage, price
        {1, Armor("Colossus", 4, 150, 1)},
        {2, Armor("Eternal Vanguard", 10, 230, 2)},
        {3, Armor("Prism", 16, 300, 3)},
        {4, Armor("Valkyrie", 24, 550, 4)},
        {5, Armor("Trident", 32, 610, 5)},
        {6, Armor("Eclipse", 40, 690, 6)},
        {7, Armor("Lunar Spirit", 52, 750, 7)},
        {8, Armor("Astral Inducer", 60, 900, 8)}
    };
    
    //Able to check private data of hero i.e My_class because its a friend
	//check class
	if (hero.My_class != "Mage")
	{
		cout << "\nNote: You can only buy from this category if you are of a mage class\n";
		cout << "...\nSorry, you are not of type mage class, therefore you cannot buy mage related items.\n";
        MainShop::mainShop(hero);
        return;
	}
    
    //this->getMageArmor();
    this->getMageArmor();//DISPLAYS THE armor MAP
    
	cout << "Select what you would like to buy, or enter 9 to quit!\n";
	cin >> choice;
	switch (choice)
	{
        case 1:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 2:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 3:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 4:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 5:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 6:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 7:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 8:
            for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
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
                        this->MageArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 9: cout << "Exiting Armor shop...\n";
            break;
            
        default:
            cout << "Error! You have entered an invalid answer\nPlease try again" << endl;
            this->MageArmor_Shop(hero);
	}
}

void MageArmor::getMageArmor()
{
    //Display Choices
	for (map <int, Armor>::iterator iter = mage_armor.begin(); iter != mage_armor.end(); iter++)
	{
        cout << iter->first << ") ";
		cout << iter->second._name << endl << "Defense: " << iter->second._defense << endl;
        cout << "Price: " << iter->second._price << " Gold\n" << endl;
        //iterator->first = key
        // iterator->second = value
	}
}

void MageArmor::EnterShop(Hero& hero)
{
    cout << "Welcome "<< hero.getName()<< ", to the Claimh Solais Armor Shop\n" << endl;
    MageArmor armor_soldier;
    armor_soldier.MageArmor_Shop(hero);
    //MageArmor Sword;
    //Sword.MageArmor_Shop(hero);
    //MainShop *MageArmor = &Sword;
    // calling MageArmor_Shop
    //MageArmor->EnterShop(hero);
    
}//Instance automatically deleted here at end of scope