#include "LinkedList.h"

LinkedList::LinkedList()
{
  head = NULL;
  tail = NULL;
  size = 0;
}

bool LinkedList::empty() { return size == 0; }

int LinkedList::qty() { return size; }

void LinkedList::addInEmpty(Data data)
{
  if (empty())
  {
    Node *node = new Node(data);
    head = node;
    tail = node;
    size++;
  }
  else
    return;
}

void LinkedList::addFront(Data data)
{
  Node *node = new Node(data);
  if (empty())
    addInEmpty(data);
  else
  {
    node->prev = NULL;
    node->next = head;
    head = node;
    size++;
  }
}

void LinkedList::addBack(Data data)
{
  Node *node = new Node(data);
  if (empty())
    addInEmpty(data);
  else
  {
    node->prev = tail;
    tail->next = node;
    tail = node;
    size++;
  }
}

void LinkedList::addInPosition(Data data, int position)
{
  if (position < 1)
  {
    cout << "A posição tem de ser maior ou igual a 1" << endl;
    return;
  }
  if (position > size + 1)
  {
    cout << "Essa posição não existe. A lista tem " << size << " elementos" << endl;
    return;
  }
  if (position == 1)
  {
    addFront(data);
    return;
  }
  Node *node = new Node(data), *aux = head;
  for (int i = 1; i < position - 1; i++)
    aux = aux->next;
  node->next = aux->next;
  node->prev = aux;
  aux->next = node;
  if (aux == tail)
    tail = node;
  size++;
  return;
}

void LinkedList::removeFront()
{
  if (size == 1)
  {
    head = NULL;
    tail = NULL;
    size--;
    return;
  }
  Node *aux = head;
  head = head->next;
  delete aux;
  aux = NULL;
  head->prev = NULL;
  size--;
}

void LinkedList::removeBack()
{
  if (size == 1)
  {
    head = NULL;
    tail = NULL;
    size--;
    return;
  }
  Node *aux = tail->prev, *aux2 = tail;
  aux->next = NULL;
  tail = aux;
  delete aux2;
  size--;
}

/* NOT WORKING YET */
void LinkedList::removeInPosition(int position)
{
  if (position < 1)
  {
    cout << "A posição tem de ser maior ou igual a 1." << endl;
    return;
  }
  if (position > size + 1)
  {
    cout << "Essa posição não existe. A lista tem " << size << " elementos" << endl;
    return;
  }
  if (position == 1)
  {
    removeFront();
    return;
  }
  Node *aux = head, *aux2;
  for (int i = 0; i < position - 1; i++)
    aux = aux->next;
  if (aux == tail)
  {
    tail = aux;
  }
  aux2 = aux->prev;
  aux2->next = aux->next;
  aux->next->prev = aux2;
  delete aux;
  size--;
  return;
}

void LinkedList::print()
{
  if (empty())
    cout << "LISTA VAZIA." << endl;
  else
  {
    Node *aux = head;
    cout << "[ ";
    while (aux != NULL)
    {
      cout << aux->data << ' ';
      aux = aux->next;
    }
    cout << "]" << endl;
  }
}