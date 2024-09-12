#include "BST.h"

//William Smith
//This .cpp file implements the BST class methods

//Methods from the node class
Node::Node(): left(nullptr), right(nullptr)
{}

//Copy constructor
Node::Node(const Node & source): left(nullptr), right(nullptr)
{
  left = source.left;
  right = source.right;
  animal = source.animal;
}

//Assignment operator
Node & Node::operator=(const Node & source)
{
  if (this == &source)
    return *this;

  delete left;
  delete right;
  delete animal;

  left = source.left;
  right = source.right;
  animal = source.animal;

  return *this;
}

//Destructor
Node::~Node()
{
  delete animal;
  animal = nullptr;
  delete left;
  left = nullptr;
  delete right;
  right = nullptr;
}

//Returns left pointer
Node *& Node::get_left()
{
  return left;
}

//Returns right pointer
Node *& Node::get_right()
{
  return right;
}

//Returns the base animal pointer
Animal *& Node::get_animal()
{
  return animal;
}

//Will create new instance of animal
int Node::create_animal(Animal * & to_add_animal)
{ 
  animal = to_add_animal;
  animal -> basic_info();
  animal -> level_of_care();
  animal -> temperament();
  return 1;
}

int Node::display_animal()
{
  animal -> display();
  return 1;
}

//Methods from the BST class
BST::BST(): root(nullptr)
{}

BST::BST(const BST & source): root(nullptr)
{
  if (!source.root)
    root = nullptr;

  else
    copy(root, source.root);
}

BST::~BST()
{
  int total = remove_all(root);
}

int BST::copy(Node * & dest, Node * source)
{
  if (!source)
  {
    delete dest;
    return 0;
  }

  Node * temp = new Node;
  dest = temp;
  copy(dest -> get_left(), source -> get_left());
  return copy(dest -> get_right(), source -> get_right());
}

//Wrapper insert function
int BST::insert()
{
  Animal * animal_added;
  char choice;
  cout << "Enter D for dog, C for cat, H for horse: ";
  cin >> choice;
  cin.ignore(100, '\n');
  
  if (choice == 'd' || choice == 'D')
    animal_added = new Dog;
  if (choice == 'c' || choice == 'C')
    animal_added = new Cat;
  if (choice == 'h' || choice == 'H')
    animal_added = new Horse;
  
  return insert(root, animal_added); //Returns the recursive function
}

//Recursive insert function
int BST::insert(Node * & root, Animal * & animal_added)
{
  if (!root)
  {
    Node * temp = new Node;
    temp -> create_animal(animal_added);
    root = temp;
    return 0;
  }

  if (animal_added -> get_name() < root -> get_animal() -> get_name())
    insert(root -> get_left(), animal_added);
  else
   insert(root -> get_right(), animal_added);

  return 1;
}

int BST::display()
{
  return display(root);
}

int BST::display(Node * root)
{
  if (!root)
    return 0;

  display(root -> get_left());
  root -> display_animal();
  return display(root -> get_right());
}

int BST::remove_all(Node * & root)
{
  if (!root)
    return 0;

  int sum = remove_all(root -> get_left()) + remove_all(root -> get_right());

  delete root;
  root = nullptr;
  return sum;
}

int BST::remove(string & animal_name)
{
  return remove(root, animal_name);
}

int BST::remove(Node * & root, string & animal_name)
{
  if (!root)
    return 0;

  if (animal_name < root -> get_animal() -> get_name())
    remove(root -> get_left(), animal_name);

  if (animal_name == root -> get_animal() -> get_name())
  {
    //No children
    if (!root -> get_left() && !root -> get_right())
    {
      delete root;
      root = nullptr;
      return 1;
    }

    //Left child exists
    else if(root -> get_left() && !root -> get_right())
    {
      Node * hold = root -> get_left();

      delete root;
      root = hold;
      return 1;
    }

    //Right child exists
    else if(!root -> get_left() && root -> get_right())
    {
      Node * hold = root -> get_right();
      
      delete root;
      root = hold;
      return 1;
    }

    //Two children exist
    else
    {
      Node * parent = nullptr;
      Node * current = root -> get_right();

      //If root -> get_right() has no left child
      //Make current the inorder successor
      if (!current -> get_left())
      {
        root -> get_animal() = current -> get_animal();

        Node * hold = current -> get_right();
        delete current;
        root -> get_right() = hold;
        return 1;
      }

      //Traverse to current -> get_left() otherwise
      else
      {
        while (current -> get_left())
        {
          parent = current;
          current = current -> get_left();
        }

        root -> get_animal() = current -> get_animal();

        Node * hold = current -> get_right();
        delete current;

        root -> get_right() = hold;
        return 1;
      }
    }
  }

  return remove(root -> get_right(), animal_name);
}
