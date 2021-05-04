#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string.h>

using namespace std;

class Node
{
private:
  int data;
  Node *next;

  friend class LinkedList;

public:
  Node(int e);
};
#endif
