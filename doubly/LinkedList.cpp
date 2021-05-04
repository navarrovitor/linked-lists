#include "LinkedList.h"

LinkedList::LinkedList()
{
  header = NULL;
  trailer = NULL;
  qtyNodes = 0;
}

bool LinkedList::empty() { return header == NULL; }

int LinkedList::qty() { return qtyNodes; }

int LinkedList::front() { return header->data; }

int LinkedList::back() { return trailer->data; }