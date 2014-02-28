//
//  ArcherWeapons.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/23/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#include "ArcherWeapons.h"
void ArcherWeapons::ArcherShop(Hero& hero)
{
    this->archer_weapons = {//name, damage, price
        {1, Weapon("Arondight", 4, 150, 1)},
        {2, Weapon("Gugnir", 10, 230, 2)},
        {3, Weapon("Susano'", 16, 300, 3)},
        {4, Weapon("Longinus", 24, 550, 4)},
        {5, Weapon("Hrunting", 32, 610, 5)},
        {6, Weapon("Clarent", 40, 690, 6)},
        {7, Weapon("Shinigami", 52, 750, 7)},
        {8, Weapon("Caliburn", 60, 900, 8)}
    };

	//Check class
	if (hero.My_class != "Archer")
	{
		cout << "\nNote:You can only buy from this category if you are of a Archer class\n";
		cout << "...\nSorry, you are not of type Archer class, therefore you cannot buy Archer related items.\n";
        MainShop::mainShop(hero);
        return;
	}
	
    this->getArcherWeapons();//Display options
    
	cout << "Select what you would like to buy, or enter 9 to quit!\n";
	cin >> choice2;
	switch (choice2)
	{
        case 1:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 2:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 3:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 4:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 5:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 6:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 7:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 8:
            for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
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
                        this->ArcherShop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 9: cout << "Exiting Bow shop...\n\n";
            break;
            
        default:
            cout << "Error! You have entered an invalid answer\nPlease try again";
            this->ArcherShop(hero);
	}
}

void ArcherWeapons::getArcherWeapons()
{
    //Display Choices
	for (map <int, Weapon>::iterator iter = archer_weapons.begin(); iter != archer_weapons.end(); iter++)
	{
        cout << iter->first << ") ";
		cout << iter->second._name << endl << "Attack: " << iter->second._damage << endl;
        cout << "Price: " << iter->second._price << " Gold\n" << endl;
        //iterator->first = key
        // iterator->second = value
	}
}

void ArcherWeapons::EnterShop(Hero& hero)
{
    cout << "Welcome "<< hero.getName()<< ", to the Claimh Solais Bow Shop\n";
    ArcherWeapons bow;
    bow.ArcherShop(hero);
    //ArcherWeapons Bow;
    //Bow.ArcherShop(hero);
    //MainShop *bowShop = &Bow;
    // calling soldierShop
    //bowShop->EnterShop(hero);
}