#include "animal.h"

//William Smith
//CS302. This file will
//hold the implemented methods of
//each class

//Constructors will allow us
//to create an object of the class,
//even if nothing is initialized/
Animal::Animal()
{}

Dog::Dog()
{}

Cat::Cat()
{}

Horse::Horse()
{}

string Animal::get_name()
{
  return name;
}

string Dog::get_name()
{
  return name;
}

string Cat::get_name()
{
  return name;
}

string Horse::get_name()
{
  return name;
}

int Animal::basic_info()
{
  cout << "Enter name of the animal: ";
  getline(cin, name);
  cout << endl;

  cout << "Enter breed: ";
  getline(cin, breed);
  cout << endl;

  cout << "Enter any notes: ";
  getline(cin, notes);
  cout << endl;

  return 1;
}

int Animal::level_of_care()
{
  cout << "How much care does this animal need? ";
  getline(cin, care);
  return 1;
}

bool Animal::temperament()
{
  char response;
  bool behave;

  cout << "Does this animal get along with others? ";
  cin >> response;

  if (response == 'y' || response == 'Y')
    behave = true;

  else
    behave = false;

  return behave;
}

int Animal::display()
{
  cout << "Name: " << name << endl;
  cout << "Breed: " << breed << endl;
  cout << "Level of care: " << care << endl;
  cout << "Notes: " << notes << endl;
  cout << endl;
  return 1;
}

int Dog::basic_info()
{  
  cout << "Enter name of the dog: ";
  getline(cin, name);
  cout << endl;

  cout << "Enter breed: ";
  getline(cin, breed);
  cout << endl;

  cout << "Enter any notes: ";
  getline(cin, notes);
  cout << endl;

  return 1;
}

bool Dog::temperament()
{ 
  char response;
  bool behave;

  cout << "Does this dog get along with others? ";
  cin >> response;

  if (response == 'y' || response == 'Y')
    behave = true;

  else
    behave = false;

  return behave;
}

int Dog::level_of_care()
{ 
  cout << "How much care does this dog need? ";
  getline(cin, care);
  return 1;
}

int Dog::display()
{
  cout << "Name: " << name << endl;
  cout << "Breed: " << breed << endl;
  cout << "Level of care: " << care << endl;
  cout << "Notes: " << notes << endl;
  cout << endl;
  return 1;
}
int Cat::basic_info()
{  
  cout << "Enter name of the cat: ";
  getline(cin, name);
  cout << endl;

  cout << "Enter breed: ";
  getline(cin, breed);
  cout << endl;

  cout << "Enter any notes: ";
  getline(cin, notes);
  cout << endl;

  return 1;
}

bool Cat::temperament()
{ 
  char response;
  bool behave;

  cout << "Does this cat get along with others? ";
  cin >> response;

  if (response == 'y' || response == 'Y')
    behave = true;

  else
    behave = false;

  return behave;
}

int Cat::level_of_care()
{ 
  cout << "How much care does this cat need? ";
  getline(cin, care);
  return 1;
}


int Cat::display()
{
  cout << "Name: " << name << endl;
  cout << "Breed: " << breed << endl;
  cout << "Level of care: " << care << endl;
  cout << "Notes: " << notes << endl;
  cout << endl;
  return 1;
}


int Horse::basic_info()
{  
  cout << "Enter name of the horse: ";
  getline(cin, name);
  cout << endl;

  cout << "Enter breed: ";
  getline(cin, breed);
  cout << endl;

  cout << "Enter any notes: ";
  getline(cin, notes);
  cout << endl;

  return 1;
}

bool Horse::temperament()
{ 
  char response;
  bool behave;

  cout << "Does this horse get along with others? ";
  cin >> response;

  if (response == 'y' || response == 'Y')
    behave = true;

  else
    behave = false;

  return behave;
}

int Horse::level_of_care()
{ 
  cout << "How much care does this horse need? ";
  getline(cin, care);
  return 1;
}

int Horse::display()
{
  cout << "Name: " << name << endl;
  cout << "Breed: " << breed << endl;
  cout << "Level of care: " << care << endl;
  cout << "Notes: " << notes << endl;
  cout << endl;
  return 1;
}
