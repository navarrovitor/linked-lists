#include "Node.h"

class LinkedList
{
private:
  Node *head;
  int qtyNodes;

public:
  LinkedList();

  bool empty();
  int qty();
  int front();
  int middle();
  int back();
  // info

  void addFront(int e);
  void addBack(int e);
  void addInPosition(int e, int position);
  // string addInPosition(int e, int position);
  // add

  void removeFront();
  void removeBack();
  void removeInPosition(int position);
  // string removeInPosition(int position);
  void removeNode(Node *node);
  void removeElement(int e);
  void removeDuplicates();
  void removeCurrentNode(Node *previous, Node *current);
  // remove

  void print();
  void reverse();
  bool containsLoop();
  void sort();
  bool present(int e);
  void listUnion(LinkedList a, LinkedList b);
  void listIntersection(LinkedList a, LinkedList b);
  void listSubtraction(LinkedList a, LinkedList b);
  void listSubset(LinkedList a, LinkedList b);
  // miscelaneous
};