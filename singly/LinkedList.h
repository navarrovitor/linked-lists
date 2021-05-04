#include "Node.h"

class LinkedList
{
private:
  Node *head;
  int qtyNodes;

public:
  LinkedList();

  /* LIST INFO METHODS */

  // returns true if a list is empty
  bool empty();
  // returns the quantity of nodes in a list
  int qty();
  // returns the data of the front (first) node of a list
  int front();
  // returns the data of the middle node of a list (considering it has an even number of nodes)
  int middle();
  // returns the data of the back (last) node of a list
  int back();

  /* ADD METHODS */

  // add a node to the front of a list
  void addFront(int e);
  // add a node to the back of a list
  void addBack(int e);
  // add a node to the nth position of a list
  void addInPosition(int e, int position);
  // add a node to the nth position of a list (returns a string telling us the result, not using cout)
  string addInPositionString(int e, int position);

  /* REMOVE METHODS */

  // remove the node at the front of a list
  void removeFront();
  // remove the node at the back of a list
  void removeBack();
  // remove the node at the nth position of a list
  void removeInPosition(int position);
  // remove the node at the nth position of a list (returns a string telling us the result, not using cout)
  string removeInPositionString(int position);
  // remove a specific node
  void removeNode(Node *node);
  // remove a node that has a specific element
  void removeElement(int e);
  // remove all duplicates in a list
  void removeDuplicates();
  // remove the current node (useful when iterating through a list)
  void removeCurrentNode(Node *previous, Node *current);

  /* MISCELANEOUS METHODS */

  // prints the list
  void print();
  // reverses the list
  void reverse();
  // returns true if there's a loop in the list
  bool containsLoop();
  // sorts the list (bubble sort)
  void sort();
  // returns true if the element is in the list (useful when iterating through a list)
  bool isPresent(int e);
  // creates a list with the union between two given lists (a ∪ b)
  void listUnion(LinkedList a, LinkedList b);
  // creates a list with the intersection between two given lists (a ∩ b)
  void listIntersection(LinkedList a, LinkedList b);
  // creates a list with the subtraction between two given lists (a - b)
  void listSubtraction(LinkedList a, LinkedList b);
  // returns true if a list is a subset of another list (current list ⊆ b?)
  bool listSubset(LinkedList x);
};