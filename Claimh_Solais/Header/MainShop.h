//
//  MainShop.h
//  SampleClass1
//
//  Created by Damian Lajara on 12/22/13.
//  Copyright (c) 2013 Damian Lajara. All rights reserved.
//

#ifndef __SampleClass1__MainShop__
#define __SampleClass1__MainShop__

#include "Hero.h"
#include <map>
#include <vector>
#include <string>
#include <algorithm>

struct Potion {
    string _name;
    int _health;
    int _price;
    int _value;
	int _sellValue;
    
    static bool compareByValue(const Potion& lhs, const Potion& rhs)
    { return lhs._value < rhs._value; }
    
    Potion()
    : _name(""), _health(0), _price(0), _sellValue(0), _value(0)
    {}
    Potion(const string& name, int health, int price,  int sell, int value)
    : _name(name), _health(health), _price(price), _sellValue(sell), _value(value)
    {}
};
 struct Weapon {
    string _name;
    int _damage;
    int _price;
    int _value;
	int _sellValue;
     
     static bool compareByValue(const Weapon& lhs, const Weapon& rhs)
     { return lhs._value < rhs._value; }
     
    Weapon()
    : _name(""), _damage(0), _price(0), _sellValue(0), _value(0)
    {}
    Weapon(const string& name, int damage, int price, int sell, int value )
    : _name(name), _damage(damage), _price(price), _sellValue(sell), _value(value)
    {}
};
struct Armor {
    string _name;
    int _defense;
    int _price;
    int _value;
	int _sellValue;
    
    static bool compareByValue(const Armor& lhs, const Armor& rhs)
    { return lhs._value < rhs._value; }
    
    Armor()
    : _name(""), _defense(0), _price(0), _sellValue(0), _value(0)
    {}
    Armor(const string& name, int defense, int price, int sell, int value )
    : _name(name), _defense(defense), _price(price), _sellValue(sell), _value(value)
    {}
};

class MainShop
{
    friend class Hero;//Hero can access data (i.e vector weapon_inventory;;
    private:
        int choice;
        int choice1;
        char enter;
        
    protected:
        //declare static so derived classes are all using the same inventory instead of each having their own
		//int effect = 12;
		//int price = 100;
		//int sell_value = 50;
        static vector <Armor> armor_inventory;
        static vector <Potion> potion_inventory;
        static vector <Weapon> weapon_inventory;
	
		int map_effect_array[8];
		int map_price_array[8];
		int map_sellValue_array[8];
	
		void init_map_values();
        void add_weapon(Weapon weapon);
        void add_armor(Armor armor);
        void add_potion(Potion potion);
        
        bool equip_weapon(string& name) const;
        bool equip_armor(string& name) const;
        
        void display_weapons();
        void display_armor();
        void display_potions();
    
        Weapon Equipped_weapon();
        Armor Equipped_armor();
    
        
      
    public:
        
        //void EnterShop(Hero& hero);
        void mainShop(Hero& hero);
        virtual ~MainShop(){}  // Doesn't do anything, but you need it anyway
        virtual void EnterShop(Hero &hero){cout << hero.getName() << " is Inside Mainshop virtual\n";}
        //Didnt declare it a pure virtual function "virtual void EnterShop(Hero &hero)=0" because then i wouldnt be able to make objects from it
        //And since i needed it in my hero function, i just made a normal virtual function

    
};



#endif /* defined(__SampleClass1__MainShop__) */
