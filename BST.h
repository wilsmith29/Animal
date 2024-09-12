#include "animal.h"
#include <vector>
#include <memory>
using std::unique_ptr;

//William Smith
//This file holds the node and BST classes
class Node
{
	public:
		Node();
		Node(const Node & source);
		Node & operator=(const Node & source);
		~Node();
		Node *& get_left();
		Node *& get_right();
		Animal *& get_animal();
		int create_animal(Animal * & to_add_animal);
                int display_animal();

	protected:
		Animal * animal;
		Node * left;
		Node * right;
};

class BST
{
	public:
		BST();
		BST(const BST & source);
		BST & operator=(const BST & src);
		~BST();
		int insert();
		int display();
		int remove(string & animal_name);
	protected:
		Node * root;
		int insert(Node * & root, Animal * & animal_added);
		int display(Node * root);
		int remove(Node * & root, string & animal_name);
		int remove_all(Node * & root);
  		int copy(Node * & dest, Node * source);
		
};
