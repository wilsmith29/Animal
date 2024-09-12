#include "BST.h"

//William Smith
//This file will run the 
//Whole program

int main()
{
  BST table;
  char option;
  char again;
  char enter;
  string pet_name;
  vector<shared_ptr<string>> nameVector;
  auto sharedString = make_shared<string>(pet_name);
  
  do
  {
    cout << "Are you listing pets or adopting? (Enter L for List, A for Adopt): ";
    cin >> option;
    cin.ignore(100, '\n');

    switch (option)
    {
      case 'L':
        do
        {
          table.insert();
          cout << "Add another pet? (Y/N): ";
          cin >> enter;
          cin.ignore(100, '\n');
        } while (enter == 'y' || enter == 'Y');
        break;

      case 'A':
        cout << "List of available pets: " << endl;
        table.display();
        cout << "Enter pet name that you want to adopt: ";
        getline(cin, pet_name);
        nameVector.push_back(sharedString);
        table.remove(pet_name);
        cout << pet_name << " adopted!" << endl;
        break;
    }
    
    cout << "Keep going? ";
    cin >> again;
    cin.ignore(100, '\n');

  } while (again == 'y' || again == 'Y');
  

  return 0;
}
