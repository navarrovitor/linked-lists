#include "LinkedList.h"

LinkedList::LinkedList()
{
  Node *header, *trailer;
  header->next = trailer;
  trailer->previous = header;
  qtyNodes = 0;
}

bool LinkedList::empty() { return header->next == trailer; }

int LinkedList::qty() { return qtyNodes; }

int LinkedList::front() { return header->next->data; }

int LinkedList::back() { return trailer->previous->data; }

void LinkedList::add(Node *v, Data e)
{
  Node *u = new Node(e);
  u->next = v;
  u->previous = v->previous;
  v->previous->next = v->previous = u;
  qtyNodes++;
}

void LinkedList::addFront(Data e) { add(header->next, e); }

void LinkedList::addBack(Data e) { add(trailer, e); }
