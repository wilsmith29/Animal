#include <iostream>
#include <string>
using namespace std;

//William Smith, CS302
//Animal class header file
//File holds the classes that manage
//the different animals


//Abstract Base Class
class Animal
{
	public:
		Animal();
		virtual string get_name();
		virtual int basic_info();
		virtual bool temperament();
		virtual int level_of_care();
		virtual int display();
	protected:
		string name;
		string breed;
		string care;
		string temper;
		string notes;
};


//Derived Classes
class Dog: public Animal
{
	public:
		Dog(); 	
		string get_name();
		int basic_info();
		bool temperament();
		int level_of_care();
		int display();
		bool needs_microchip();
	protected:  
		string name;
		string breed;
		string care;
		string temper;
		string notes;
};


class Cat: public Animal
{
	public:
		Cat(); 
		string get_name();
		int basic_info();
		bool temperament();
		int level_of_care();
		int display();
		bool claws_removed();
	protected: 
		string name;
		string breed;
		string care;
		string temper;
		string notes;
};


class Horse: public Animal
{
	public:
		Horse(); 	
		string get_name();
		int basic_info();
		bool temperament();
		int level_of_care();
		int display();
		bool needs_stable();
	protected:  
		string name;
		string breed;
		string care;
		string temper;
		string notes;
};

