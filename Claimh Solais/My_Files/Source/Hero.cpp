//
//  Hero.cpp
//  SampleClass1
//
//  Created by Damian Lajara on 12/20/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#include "Hero.h"
//#include "MainShop.h"
#include "Inventory.h"//Need in order to make inventory object
#include <iostream>
#include <String>
MainShop shop;
Inventory inventory;
#include <ctime>
//#include <stdlib.h>//use system functions
using namespace std;

Hero::Hero(int newHp, int newLevel, int newAttack, int newDef)
 //: Character(newHp, newLevel, newAttack, newDef)
{
	//cout << "\nHero created using Overloaded function!\n";
	hp = newHp;
	//cout << "Hp is: "<< hp << endl;
	level = newLevel;
	//cout << "level is: " << level << endl;
	attack = newAttack;
	//cout << "Attack is: " << attack << endl;
	defense = newDef;
	//cout << "Defense is: " << defense << endl;
	// logging goes here
	// note that you don't need HeroLevel etc. at all any more, just use level
}

Hero::~Hero()
{
	//cout << "Hero destroyed!\n";
}

int Hero::reset_max_hp()
{
	int temp = 0;
	temp = (this->getHp()-this->get_maxHp());
	this->setHp(this->getHp() - temp);
	return this->getHp();
}
void Hero::Customize()
{
	cout << "\nWhat would you like your character to be called?\n";
	getline(cin, name);
    cout << "\nWhat is your gender?\n1)Male\n2)Female\n";
    cin >> gender_choice;
    if (gender_choice == 1) gender = "Male";
    else if (gender_choice == 2) gender = "Female";
    else {cout << "Error! Invalid input"; return;}
	cout << "\nWhat class Would you like to be?" << endl;
	cout << "1) Soldier\n2) Mage\n3) Archer" << endl;
	cin >> My_class;
    
	if (My_class == "1") My_class = "Soldier";
	else if (My_class == "2") My_class = "Mage";
	else if (My_class == "3") My_class = "Archer";
	else
    {
		cout << "Sorry, You entered an invalid answer!\nPlease try again\n" << endl;
		this->Customize();
	}
	cout << "\nWelcome " << name << ", to Claimh Solais!\n" << endl;
	cout << "You have chosen to be of type " << My_class << " class" << endl;
}

void Hero::option_menu()
{
    cout << "\n****Game Options****\n";
    cout << "1) Toggle Battle Scenes\n";
    cout << "2) Change Class\n";
    cout << "3) Change Gender\n";
    cout << "4) Change Name\n";
    cout << "5) Quit\n";
    cin >> option_choice;
    switch (option_choice)
    {
        case 1:
            cout << "Do you want to disable all of the battle scenes?\n1) Yes\n2) No\n";
            cin >> skip_choice;
            if(skip_choice == 1)
            {
                skip = true;
                cout << "Battle scenes have been disabled.\n";
                return;
            }
            else if (skip_choice == 2)
            {
                skip = false;
                cout << "Battle scenes have been enabled.\n";
                return;
            }
            else
            {
                cout << "Sorry, You entered an invalid answer!\nPlease try again\n";
                return;
            }
            break;
            
        case 2:
            cout << "Are you sure you want to change your class?\n";
            cout << "You will lose all of your current weapons and armor!\n";
            cout << "1) Yes\n2) No\n";
            cin >> class_choice;
            if(class_choice == 1)
            {
                //previous_class = My_class;
                cout << "\nWhat class Would you like to be?";
                cout << "\n1) Soldier\n2) Mage\n3) Archer" << endl;
                cin >> My_class;
                if (My_class == "1") My_class = "Soldier";
                else if (My_class == "2") My_class = "Mage";
                else if (My_class == "3") My_class = "Archer";
                else {cout << "Sorry, You entered an invalid answer!\nPlease try again\n" << endl; return;}
                
                cout << "Congratulations! You have chosen to be of class type " << My_class << endl;
                //MainShop::weapon_inventory.clear();//This will work since mainshop is a friend of hero
                shop.weapon_inventory.clear();//this will also work
                shop.armor_inventory.clear();
                return;
            }
            else if (class_choice == 2)
            {
                cout << "Wise Decision! Your current class is the best! ;)";
                return;
            }
            else
            {
                cout << "Sorry, You entered an invalid answer!\nPlease try again\n";
                return;
            }
            break;
            
        case 3:
            cout << "Do you really want to change your gender?\n1) Yes\n2) No\n";
            cin >> choice;
            if(choice == 1)
            {
                cout << "What is your gender?\n1) Male\n2) Female\n";
                cin >> gender_choice;
                if (gender_choice == 1)
                {
                    gender = "Male";
                    cout << "your gender has been changed to " << gender << endl;
                    return;
                }
                else if (gender_choice == 2)
                {
                    gender = "Female";
                    cout << "your gender has been changed to " << gender << endl;
                    return;
                }
                else
                {
                    cout << "Sorry, You entered an invalid answer!\nPlease try again\n" << endl;
                    return;
                }
            }
            else if (choice == 2)
            {
                cout << "hm...I guess it was hard converting to something your not.";
                return;
            }
            else
            {
                cout << "Sorry, You entered an invalid answer!\nPlease try again\n";
                return;
            }
            break;
            
        case 4:
            cout << "Do you really want to change your name?\n1) Yes\n2) No\n";
            cin >> name_choice;
            if(name_choice == 1)
            {
                cout << "\nWhat would you like your character to be called?\n";
                cin.ignore(256, '\n'); //discard up to 256 characters or the '\n', whichever comes first
                getline(cin, name);
                cout << "Hello " << name << "! What a nice name you got there!\n";
                return;
            }
            else if(name_choice == 2)
            {
                cout << "aww man...I was looking forward to the weird name you were going to choose!";
                return;
            }
            else
            {
                cout << "Sorry, You entered an invalid answer!\nPlease try again\n" << endl;
                return;
            }
            break;
            
        case 5:
            cout << "Exiting options menu...\n";
            return;
            break;
            
        default: {cout << "Sorry, You entered an invalid answer!\nPlease try again\n"; return;}
            break;
    }
    
}

void Hero::Dungeon(Hero& hero, Monster& m, Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9)
{
    srand((unsigned int)time(NULL));
    //MainShop shop;
    //Inventory inventory;
    do
    {
        if (this->getHp() > 0)//Can only roll if player is still alive
        {
        
            int roll = ((rand() % 6) +1);
            cout << "\nEnter 'r' for roll, 's' for shop, 'i' for inventory, 'o' for options menu, or 'q' to quit ";
            cin >> option;
            if ((option == 'r')||(option == 'R')) this->RandDBattle(m, m1, m2, m3, m4, m5, m6, m7, m8, m9,roll);
            else if ((option == 's')||(option == 'S')) shop.mainShop(hero);
            else if ((option == 'i')||(option == 'I')) inventory.DisplayInventory(hero);
            else if ((option == 'o')||(option == 'O')) this->option_menu();
            else if ((option == 'q')||(option == 'Q')) exit = false;
            else cout << "You enetered an invalid answer!\n";
        }
        else//If player is dead or anything else
        {
            cout << "Better luck next time\n";
            exit = false;//Exit Game
        }
        
    } while (exit == true);
    
    
}

void Hero::RandDBattle(Monster& m, Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9, int roll)
{
   cout << "You rolled a " << roll << "\n";
    if (roll % 2 == 0)//if even
    {
        CheckBattle(m, m1, m2, m3, m4, m5, m6, m7, m8, m9);
        //Battle(m);
    }
    else cout << "Be grateful that luck is on your side!!\n";
        
}

void Hero::Battle(Monster& m)
{//return 1 + rand() % (_base_damage + _equipped_weapon._damage
    
    while ((this->getHp() > 0) && (m.getHp() > 0))
    {
		if (skip == false) cout << "\nYour hp is: " << this->getHp() << endl;
		if (skip == false) cout << "The enemy's hp is: " << m.getHp() << endl;
		if (skip == false) cout << "\nThe monster has attacked you!\n";
		if (skip == false) cout << "You received " << m.getAttack() << " damage" << endl;
		this->damageTaken(m.getAttack());
		if (this->getHp() > 0)//Check if still alive
		{
			if (skip == false)cout << "\nYour hp: " << this->getHp() << endl;
			//cout << "Enemy hp is: "<< m.getHp() << endl;
			if (skip == false)cout << "\nNow you attacked!\nYou have dealt " << this->getAttack() << " Damage" << endl;
			m.damageTaken(this->getAttack());
            
			if (m.getHp() > 0)//Check if still alive
			{
				if (skip == false)cout << "Enemy hp: " << m.getHp() << endl;
				if (skip == false)cout << "\nAttacking again!\n";
			}
		}
		
	}
	if ((this->getHp() > 0) && (m.getHp() <= 0))//check to see if im alive and monster is dead
	{
        //system("cls");
        if(skip == true) cout << "\n. . . Battle in progress . . .\n";
		cout << "\nCongratulations! You killed the enemy!" << endl;
		cout << "\nyou received " << m.getMoney() << " gold" << endl;
		this->setMoney(this->getMoney() + m.getMoney());
		cout << "you gained " << m.getExp() << " experience" << endl;
		this->setExp(this->getExp() + m.getExp());
        this->CheckExp();
        //cout << "Total Exp: " << this->getExp() << endl;
		m.setHp(100);//Reset hp so if i call again  from another function it wont be dead
		this->setRandMonsters(this->getRandMonsters()-1);
		if (this->getRandMonsters() == 0)
		{
			cout << "Congratulations! You have defeated all the Monsters!\n";
			cout << "You can now go to the next floor!\n";
            this->AdvanceNextDungeonLevel();
            this->SetDungeonLevel();
		}
		else cout << "\n"<< this->getRandMonsters() << " monsters remaining!\n";
        
		//system("cls");//cout << string(30, '\n');
	}
	else if ((this->getHp() <= 0) && (m.getHp() > 0))
		cout << "You have died!" << endl;
	else
		cout << "ERROR";
}

void Hero::CheckBattle(Monster& m,Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9)//Battle depending on DungeonFLoor
{
 
    if(this->getDungeonFloor() == 1) this->Battle(m);
    else if (this->getDungeonFloor() == 2) this->Battle(m1);
    else if (this->getDungeonFloor() == 3) this->Battle(m2);
    else if (this->getDungeonFloor() == 4) this->Battle(m3);
    else if (this->getDungeonFloor() == 5) this->Battle(m4);
    else if (this->getDungeonFloor() == 6) this->Battle(m5);
    else if (this->getDungeonFloor() == 7) this->Battle(m6);
    else if (this->getDungeonFloor() == 8) this->Battle(m7);
    else if (this->getDungeonFloor() == 9) this->Battle(m8);
    else if (this->getDungeonFloor() == 10) this->Battle(m9);
 
}

void Hero::CheckExp()
{
        //check xp function
        if ((this->getExp() >= 100) && (this->getExp() <= 300))//check to see if exp is between 100 and 300
        {
            if (leveled_up[0] == false)
            {
                this->setlevel(2);
                this->Checklevel();
            }
            //else cout << "You are already level 2\n";//debug code
            
            leveled_up[0] = true;//Make sure you dont level up to level 2 more than once
        }
        else if ((this->getExp() >= 600) && (this->getExp() < 700))
        {
            if (leveled_up[1] == false)
            {
                this->setlevel(3);
                this->Checklevel();
            }
            //else cout << "You are already level 3\n";//debug code
            
            leveled_up[1] = true;
        }
        else if ((this->getExp() >= 1000) && (this->getExp() < 1200))
        {
            if (leveled_up[2] == false)
            {
                this->setlevel(4);
                this->Checklevel();
            }
            //else cout << "You are already level 4\n";//debug code
            
            leveled_up[2] = true;
        }
        else if ((this->getExp() >= 1800) && (this->getExp() < 2000))
        {
            if (leveled_up[3] == false)
            {
                this->setlevel(5);
                this->Checklevel();
            }
            //else cout << "You are already level 5\n";//debug code
            
            leveled_up[3] = true;
        }
        else if ((this->getExp() >= 2600) && (this->getExp() < 2700))
        {
            if (leveled_up[4] == false)
            {
                this->setlevel(6);
                this->Checklevel();
            }
            //else cout << "You are already level 6\n";//debug code
            
            leveled_up[4] = true;
        }
        else if ((this->getExp() >= 3600) && (this->getExp() < 3700))
        {
            if (leveled_up[5] == false)
            {
                this->setlevel(7);
                this->Checklevel();
            }
            //else cout << "You are already level 7\n";//debug code
            
            leveled_up[5] = true;
        }
        else if ((this->getExp() >= 4300) && (this->getExp() < 4400))
        {
            if (leveled_up[6] == false)
            {
                this->setlevel(8);
                this->Checklevel();
            }
            //else cout << "You are already level 8\n";//debug code
            
            leveled_up[6] = true;
        }
        else if ((this->getExp() >= 5000) && (this->getExp() < 5100))
        {
            if (leveled_up[7] == false)
            {
                this->setlevel(9);
                this->Checklevel();
            }
            //else cout << "You are already level 9\n";//debug code
            
            leveled_up[7] = true;
        }
        else if ((this->getExp() >= 6000) && (this->getExp() < 6200))
        {
            if (leveled_up[8] == false)
            {
                this->setlevel(10);
                this->Checklevel();
            }
            //else cout << "You are already level 10\n";//debug code
            
            leveled_up[8] = true;
        }
}

void Hero::Checklevel()
{
	if (this->getlevel() == 2)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //20/2 = 10, so 100+10 = 110
		this->setAttack(this->getAttack() + stat_increase[0]);
		this->setDefense(this->getDefense() + stat_increase[0]);
		this->setHp(this->getHp() + stat_increase[0]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[0] << "\nDefense increased! +" << stat_increase[0] << "\nHp increased! +" << stat_increase[0] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
        
	}
    
	else if (this->getlevel() == 3)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //40/2 = 20, so 110+20 = 130
		this->setAttack(this->getAttack() + stat_increase[1]);
		this->setDefense(this->getDefense() + stat_increase[1]);
		this->setHp(this->getHp() + stat_increase[1]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[1] << "\nDefense increased! +" << stat_increase[1] << "\nHp increased! +" << stat_increase[1] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
	}
    
	else if (this->getlevel() == 4)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //60/2 = 30, so 130+20 = 150
		this->setAttack(this->getAttack() + stat_increase[2]);
		this->setDefense(this->getDefense() + stat_increase[2]);
		this->setHp(this->getHp() + stat_increase[2]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[2] << "\nDefense increased! +" << stat_increase[2] << "\nHp increased! +" << stat_increase[2] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Total Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
	}
    
	else if (this->getlevel() == 5)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //80/2 = 40, so 150+20 = 170
		this->setAttack(this->getAttack() + stat_increase[3]);
		this->setDefense(this->getDefense() + stat_increase[3]);
		this->setHp(this->getHp() + stat_increase[3]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[3] << "\nDefense increased! +" << stat_increase[3] << "\nHp increased! +" << stat_increase[3] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
	}
    
	else if (this->getlevel() == 6)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //100/2 = 50, so 170+20 = 190
		this->setAttack(this->getAttack() + stat_increase[4]);
		this->setDefense(this->getDefense() + stat_increase[4]);
		this->setHp(this->getHp() + stat_increase[4]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[4] << "\nDefense increased! +" << stat_increase[4] << "\nHp increased! +" << stat_increase[4] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
	}
    
	else if (this->getlevel() == 7)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //120/2 = 60, so 190+20 = 210
		this->setAttack(this->getAttack() + stat_increase[5]);
		this->setDefense(this->getDefense() + stat_increase[5]);
		this->setHp(this->getHp() + stat_increase[5]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[5] << "\nDefense increased! +" << stat_increase[5] << "\nHp increased! +" << stat_increase[5] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
	}
    
	else if (this->getlevel() == 8)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //140/2 = 70, so 210+20 = 230
		this->setAttack(this->getAttack() + stat_increase[6]);
		this->setDefense(this->getDefense() + stat_increase[6]);
		this->setHp(this->getHp() + stat_increase[6]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[6] << "\nDefense increased! +" << stat_increase[6] << "\nHp increased! +" << stat_increase[6] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
	}
    
	else if (this->getlevel() == 9)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //160/2 = 80, so 230+20 = 250
		this->setAttack(this->getAttack() + stat_increase[7]);
		this->setDefense(this->getDefense() + stat_increase[7]);
		this->setHp(this->getHp() + stat_increase[7]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[7] << "\nDefense increased! +" << stat_increase[7] << "\nHp increased! +" << stat_increase[7] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " << this->getHp() << endl;
	}
    
	else if (this->getlevel() == 10)
	{
		this->set_maxHp(this->get_maxHp() + (stat_increase[0]/2)); //180/2 = 90, so 250+20 = 270
		this->setAttack(this->getAttack() + stat_increase[8]);
		this->setDefense(this->getDefense() + stat_increase[8]);
		this->setHp(this->getHp() + stat_increase[8]);
		cout << "Congratulations! You leveled up!\n " << endl;
		cout << "Attack increased! + " << stat_increase[8] << "\nDefense increased! +" << stat_increase[8] << "\nHp increased! +" << stat_increase[8] << "\n";
		cout << "\nYou are now level " << this->getlevel() << endl;
		cout << "\nTotal Attack: " << this->getAttack() << "\nTotal Defense: " << this->getDefense() << "\nTotal Hp: " <<  this->getHp() << "\nTotal Money: " << this->getMoney() << endl;
	}
    
	//else
    //cout << "Error on CheckLevel Function\n" << endl;
}

void Hero::setDungeonFloor(int f)
{
    DungeonFloor = f;
    cout << "\nWelcome to Claimh Solais Dungeon Floor " << f << "\n";
}

void Hero::setRandMonsters(int r)
{
    RandMonsters = r;
}

void Hero::SetDungeonLevel()
{
    if(DungeonFloor == 1)
    {
        this->setRandMonsters(4);//4 monsters for level 1
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 1\n";
    }
    else if(DungeonFloor == 2)
    {
        this->setRandMonsters(5);//5 monsters for level 2
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 2\n";
    }
    else if(DungeonFloor == 3)
    {
        this->setRandMonsters(6);//6 monsters for level 3
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 3\n";
    }
    
    else if(DungeonFloor == 4)
    {
        this->setRandMonsters(7);//7 monsters for level 4
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 4\n";
    }
    
    else if(DungeonFloor == 5)
    {
        this->setRandMonsters(8);//8 monsters for level 5
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 5\n";
    }
    
    else if(DungeonFloor == 6)
    {
        this->setRandMonsters(9);//9 monsters for level 6
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 6\n";
    }
    
    else if(DungeonFloor == 7)
    {
        this->setRandMonsters(10);//10 monsters for level 7
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 7\n";
    }
    
    else if(DungeonFloor == 8)
    {
        this->setRandMonsters(11);//11 monsters for level 8
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 8\n";
    }
    
    else if(DungeonFloor == 9)
    {
        this->setRandMonsters(12);//12 monsters for level 9
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 9\n";
    }
    
    else if(DungeonFloor == 10)
    {
        this->setRandMonsters(13);//13 monsters for level 10
        cout << "There are a total of " << this->getRandMonsters() << " monsters in Dungeon level 10\n";
    }
    
    else cout << "Error on CheckDungeonLevel Function\n";//debug code
}

void Hero::AdvanceNextDungeonLevel()
{
    if(DungeonFloor == 1) this->setDungeonFloor(2);
    else if(DungeonFloor == 2) this->setDungeonFloor(3);
    else if(DungeonFloor == 3) this->setDungeonFloor(4);
    else if(DungeonFloor == 4) this->setDungeonFloor(5);
    else if(DungeonFloor == 5) this->setDungeonFloor(6);
    else if(DungeonFloor == 6) this->setDungeonFloor(7);
    else if(DungeonFloor == 7) this->setDungeonFloor(8);
    else if(DungeonFloor == 8) this->setDungeonFloor(9);
    else if(DungeonFloor == 9) this->setDungeonFloor(10);
    else if(DungeonFloor == 10) cout << "You have cleared the Dungeon!\n";
}

void Hero::initialize_hero()
{
    level_increase = 20;
    
    for (int i = 0; i<9; i++){
        leveled_up[i] = false;
    }//Skip level one, since CheckExp() starts on level 2
    
    for (int i = 0; i < 9; i++){//initialize the stat_increase array
        stat_increase[i] = level_increase;
        level_increase *=2;//20-40-80-etc
        //cout << "Stats: " << stat_increase[i] << endl;//debug code
    }
    
	this->set_maxHp(100);//Since this variable is not in the character constructor since i didnt want monsters to have a max_hp, i just put it in protected so hero can access it, and initialize it here!
}
void Hero::GamePlay(Hero& hero, Monster& m, Monster& m1,Monster& m2,Monster& m3,Monster& m4,Monster& m5,Monster& m6,Monster& m7,Monster& m8,Monster& m9)
{
    //List of things to do:
    
	//make goals, and missions to complete
    
	//Give me the option of fighting or running away. (make a function where it calculates my escape percentage). If i fail to escape i have to fight
    
	//Create Bosses. For every boss i beat i get a bit of my memory back
    
	//Develop story--Young hero with no memory wakes up all tied up in a dark dungeon with only basic equipment.
    
	//make a yes or no question where the user might want to buy something else
    
    //Make a treasure chest
    
	//StoryIntro();
	//string randFromVector;
	//randFromVector = WeaponInventory[rand() % WeaponInventory.size()];    // Takes the data at this address
	//cout << "random item from weapon inventory: " << randFromVector << endl;
	//Story1();
	//cin.sync();
	//cin.get();
    
	//random: Value 10-4 is-Max:10,Min:4 so ((rand()% difference+1)+minValue
    
    initialize_hero();
	
    this->setDungeonFloor(1);
    this->SetDungeonLevel();//Sets dungeon Monsters to 4 for floor1
	cout << "Roll a dice. For every even number your roll you will face a monster!\nYou have a 50/50 chance of encountering an enemy\n";
    this->Dungeon(hero, m, m1, m2, m3, m4, m5, m6, m7, m8, m9);//main loop
    cout << "\nThank you for playing Claimh Solais!\n";
	cin.sync();
	cin.get();
    //End of program
}