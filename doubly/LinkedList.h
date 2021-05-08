#include "Node.h"

class LinkedList
{
private:
  Node *head;
  Node *tail;
  int size;

public:
  LinkedList();

  bool empty();
  int qty();

  void addInEmpty(Data data);
  void addFront(Data data);
  void addBack(Data data);
  void addInPosition(Data data, int position);
  void removeFront();
  void removeBack();
  void removeInPosition(int position);

  void print();
};