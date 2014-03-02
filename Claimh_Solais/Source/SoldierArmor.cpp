#include "SoldierArmor.h"
//MainShop shop;
void SoldierArmor::soldierArmor_Shop(Hero& hero)
{
    /*this->soldier_armor = {//name, damage, price
        {1, Armor("Calcite", 4, 150, 1)},
        {2, Armor("Mirage", 10, 230, 2)},
        {3, Armor("Djinn", 16, 300, 3)},
        {4, Armor("Shape Shifter", 24, 550, 4)},
        {5, Armor("Dark Prism", 32, 610, 5)},
        {6, Armor("Fatal Sith", 40, 690, 6)},
        {7, Armor("Devastator", 52, 750, 7)},
        {8, Armor("Override", 60, 900, 8)}
    };*/
	
	this->init_map_values();//Inherits init_map_values from mainshop
	
	this->soldier_armor = {//name, damage, price
        {1, Armor("Calcite",       map_effect_array[0], map_price_array[0],map_sellValue_array[0], 1)},
        {2, Armor("Mirage",		   map_effect_array[1], map_price_array[1],map_sellValue_array[1], 2)},
        {3, Armor("Djinn",         map_effect_array[2], map_price_array[2],map_sellValue_array[2], 3)},
        {4, Armor("Shape Shifter", map_effect_array[3], map_price_array[3],map_sellValue_array[3], 4)},
        {5, Armor("Dark Prism",	   map_effect_array[4], map_price_array[4],map_sellValue_array[4], 5)},
        {6, Armor("Fatal Sith",	   map_effect_array[5], map_price_array[5],map_sellValue_array[5], 6)},
        {7, Armor("Devastator",	   map_effect_array[6], map_price_array[6],map_sellValue_array[6], 7)},
        {8, Armor("Override",	   map_effect_array[7], map_price_array[7],map_sellValue_array[7], 8)}
    };
	
    //Able to check private data of hero i.e My_class because its a friend
	//check class
	if (hero.My_class != "Soldier")
	{
		cout << "\nNote: You can only buy from this category if you are of a soldier class\n";
		cout << "...\nSorry, you are not of type soldier class, therefore you cannot buy soldier related items.\n";
        MainShop::mainShop(hero);
        return;
	}
    
    //this->getSoldierArmor();
    this->getSoldierArmor();//DISPLAYS THE WEAPON MAP
    
	cout << "Select what you would like to buy, or enter 9 to quit!\n";
	cin >> choice;
	switch (choice)
	{
        case 1:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
            {
                if(iter->first == 1)
                {
                    if (hero.getMoney() >= iter->second._price)
                    {//Add a function-if you already have a weapon, you cannot buy it again
                        add_armor(iter->second);
                        hero.setMoney(hero.getMoney() - iter->second._price);
                        cout << "\nYou have Successfully Bought " << iter->second._name << "\nIt has been added to your inventory\n";
                        cout << "your total items are: "<< armor_inventory.size() << endl;
                        break;//break for loop
                    }
                    
                    else
                    {
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 2:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
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
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 3:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
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
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 4:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
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
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 5:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
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
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 6:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
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
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 7:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
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
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 8:
            for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
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
                        cout << "You do not have enough money to buy this weapon\nPlease try again\n" << endl;
                        //system("CLS");//cout << string(50, '\n');
                        this->soldierArmor_Shop(hero);
                        break;//break for loop
                    }
                }
            }
            break;//break switch
            
        case 9: cout << "Exiting Armor shop...\n";
            break;
            
        default:
            cout << "Error! You have entered an invalid answer\nPlease try again" << endl;
            this->soldierArmor_Shop(hero);
	}
}

void SoldierArmor::getSoldierArmor()
{
    //Display Choices
	for (map <int, Armor>::iterator iter = soldier_armor.begin(); iter != soldier_armor.end(); iter++)
	{
        cout << iter->first << ") ";
		cout << iter->second._name << endl << "Defense: " << iter->second._defense << endl;
        cout << "Price: " << iter->second._price << " Gold\n" << endl;
        //iterator->first = key
        // iterator->second = value
	}
}

void SoldierArmor::EnterShop(Hero& hero)
{
    cout << "Welcome "<< hero.getName()<< ", to the Claimh Solais Armor Shop\n" << endl;
    SoldierArmor armor_soldier;
    armor_soldier.soldierArmor_Shop(hero);
    //SoldierArmor Sword;
    //Sword.soldierArmor_Shop(hero);
    //MainShop *SoldierArmor = &Sword;
    // calling soldierArmor_Shop
    //SoldierArmor->EnterShop(hero);
    
}//Instance automatically deleted here at end of scope