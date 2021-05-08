#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string.h>

using namespace std;
typedef int Data;
class Node
{
private:
  Node *prev;
  Data data;
  Node *next;

  friend class LinkedList;

public:
  Node(Data d);
};
#endif
