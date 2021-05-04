#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string.h>

using namespace std;
typedef int Data;
class Node
{
private:
  Data data;
  Node *next;
  Node *previous;

  friend class LinkedList;

public:
  Node(int e);
};
#endif
