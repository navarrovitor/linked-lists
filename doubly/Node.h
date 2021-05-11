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
  Node *prev;
  Node *next;

  friend class LinkedList;

public:
  Node(Data d);
};
#endif
