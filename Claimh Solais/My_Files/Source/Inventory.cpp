//
//  Inventory.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/28/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#include "Inventory.h"
//#include "SoldierWeapons.h"
//#include "SoldierArmor.h"

void Inventory::DisplayInventory(Hero& hero)
{
    //Be able to sell in shop
    //Make a function where it sets attack
    //if weaponInventory == some name, then set attack to something
    //int equipChoice;
	cout << "\nWhat do you want to do?\n1) Check Status\n2) Equip Weapons\n3) Equip Armor\n4) Use Potions\n";//Equip what is in your inventory
	cin >> choice;
	switch (choice)
	{
        case 1: this->DisplayStats(hero);
            break;
        case 2:
            if (!weapon_inventory.empty())//Make sure inventory is not empty
            {
                cout << "Your current Weapons are: \n";
                sort(weapon_inventory.begin(), weapon_inventory.end(),Weapon::compareByValue);//Sorts vector depending on the _value
                display_weapons();
                cout << "What item weapon would you like to equip?";
                cin >> equipChoiceW;
                
                /*****CREATE AN UNEQUIP FUNCTION****/
                
                for (vector <Weapon>::iterator iter = weapon_inventory.begin(); iter != weapon_inventory.end(); iter++)
                { //loop through vector
                    if(equipChoiceW == iter->_value)//if user choice matches the weapon in vector
                    {
                        if(equip_weapon(iter->_name))//if equip was succesfull
                        {
                            cout << "\nYou have Successfully equipped " << iter->_name;//equip weapon
                            hero.setAttack(hero.getAttack() + iter->_damage);
                            //after i equip, dont let me requip the same weapon
                            cout << "\nYour equipped weapon is " << Equipped_weapon()._name;//debug code
                            weapon_flag = true;
                            break;//break for loop
                        }
                        
                        else
                        {
                            cout << "You cannot equip this weapon\nPlease try again" << endl;
                        }
                    }
                    else if ((equipChoiceW != iter->_value) && (iter == weapon_inventory.end()-1))//if user choice doesn't match with something in the vector means it was an invalid answer, since the user can pick only what the vector displays
                    {
                        cout << "\nYou have entered an invalid answer!\n";
                        break;
                    }
                }
            }
            else cout << "Error! You currently do not own any items\n";
            break;
        case 3:
            if (!armor_inventory.empty())//Make sure inventory is not empty
            {
                cout << "Your current Armors are: \n";
                sort(armor_inventory.begin(), armor_inventory.end(),Armor::compareByValue);//Sorts vector depending on the _value
                display_armor();
                cout << "What item weapon would you like to equip?";
                cin >> equipChoiceA;
                
                /*****CREATE AN UNEQUIP FUNCTION****/
                
                for (vector <Armor>::iterator iter = armor_inventory.begin(); iter != armor_inventory.end(); iter++)
                { //loop through vector
                    if(equipChoiceA == iter->_value)//if user choice matches the weapon in vector
                    {
                        if(equip_armor(iter->_name))//if equip was succesfull
                        {
                            cout << "\nYou have Successfully equipped " << iter->_name;//equip armor
                            hero.setDefense(hero.getDefense() + iter->_defense);
                            //after i equip, dont let me requip the same armor
                            cout << "\nYour equipped weapon is " << Equipped_armor()._name;//debug code
                            armor_flag = true;
                            break;//break for loop
                        }
                        
                        else
                        {
                            cout << "You cannot equip this weapon\nPlease try again" << endl;
                        }
                    }
                    else if ((equipChoiceA != iter->_value) && (iter == armor_inventory.end()-1))//if user choice doesn't match with something in the vector means it was an invalid answer, since the user can pick only what the vector displays
                    {
                        cout << "\nYou have entered an invalid answer!\n";
                        break;
                    }
                }
            }
            else cout << "Error! You currently do not own any items\n";
            break;
        case 4:
            if (!potion_inventory.empty())//Make sure inventory is not empty
            {
                cout << "Your current Potions are: \n";
                /*for (vector <Potion>::iterator iter = potion_inventory.begin(); iter != potion_inventory.end(); iter++) {
                    cout << i << ") " << iter->_name << endl;
                    ++i;
                }*/
                sort(potion_inventory.begin(), potion_inventory.end(),Potion::compareByValue);//Sorts vector depending on the _value
                display_potions();
                 
                cout << "Which potion would you like to use?";
                //cin >> equipChoice;
                
            }
            else cout << "Error! You currently do not own any items\n";
            break;
        default: cout << "Error on switch!";
	}
}

void Inventory::DisplayStats(Hero& hero)
{
	cout << "***STATUS***\n";
	cout << "Hp: " << hero.getHp() << "\n";
	cout << "Attack: " << hero.getAttack() << "\n";
	cout << "Defense: "<<hero.getDefense() <<"\n";
	cout << "Level: " << hero.getlevel() << "\n";
	cout << "Gold: " << hero.getMoney() << "\n";
	cout << "Exp: " << hero.getExp() << "\n";
    //cout << "Exp left for next level..." << endl;
    cout << "************\n";
    cout << "Enter 1 for more options or any other number to quit\n";
    cin>>more_options;
    if(more_options == 1)
    {
        cout << "***EQUIPMENT STATUS***\n";
        if(weapon_flag) cout << "Equipped Weapon: " << Equipped_weapon()._name << endl;
        else cout << "You currently do not have any weapons equipped!\n";
        if(armor_flag) cout << "Equipped Armor: " << Equipped_armor()._name << endl;
        else cout << "You currently do not have any armor equipped!\n";
        
        if(!weapon_inventory.empty()) {cout << "Current weapons in possession:\n"; display_weapons();}
        else cout << "You currently do not own any weapons\n";
        if(!armor_inventory.empty()) {cout << "\nCurrent Armor in possession:\n"; display_armor();}
        else cout << "You currently do not own any armor\n";
        if(!potion_inventory.empty()) {cout << "\nCurrent Potions in possession:\n"; display_potions();}
        else cout << "\nYou currently do not own any potions\n";
        cout << "***********************\n";
    }
    else {cout << "Exiting Status Menu . . .\n"; return;}
    //Learn how to throw exceptions so in case someone types a non-integer value, it wont go in an endless loop
	
    //exp till next level:...
}
