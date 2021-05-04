#include "Node.h"

class LinkedList
{
private:
  Node *header;
  Node *trailer;
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
  // returns the data of the back (last) node of a list
  int back();
};