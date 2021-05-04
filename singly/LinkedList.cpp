#include "LinkedList.h"
#include <sstream>

LinkedList::LinkedList()
{
  head = NULL;
  qtyNodes = 0;
}

bool LinkedList::empty() { return head == NULL; }

int LinkedList::qty() { return qtyNodes; }

int LinkedList::front() { return head->data; }

int LinkedList::middle()
{
  Node *slow = head, *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}

int LinkedList::back()
{
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  return temp->data;
}

void LinkedList::addFront(int e)
{
  Node *aux = new Node(e);
  aux->next = head;
  head = aux;
  qtyNodes++;
}

void LinkedList::addBack(int e)
{
  Node *aux = new Node(e);
  if (empty())
    head = aux;
  else
  {
    Node *temp = head;
    while (temp->next != NULL)
      temp = temp->next;
    temp->next = aux;
  }
  qtyNodes++;
}

// string LinkedList::addInPosition(int e, int position)

void LinkedList::addInPosition(int e, int position)
{
  // stringstream response;
  // while (true)
  // {
  if (position < 1)
  {
    cout << "POSITION MUST BE GREATER THAN 1." << endl;

    // response << "POSITION MUST BE GREATER THAN 1.";
    // break;
    return;
  }
  if (position > qtyNodes + 1)
  {
    cout << "POSITION INEXISTENT. THE LIST HAS " << qtyNodes << " NODES." << endl;

    // response << "POSITION INEXISTENT. THE LIST HAS " << qtyNodes << " NODES.";
    // break;
    return;
  }
  if (position == 1)
  {
    addFront(e);
    cout << "ADDED AT FRONT" << endl;

    // response << "ADDED AT FRONT";
    // break;
    return;
  }
  Node *temp = new Node(e), *aux = head;

  for (int i = 0; i < position - 2; i++)
    aux = aux->next;
  temp->next = aux->next;
  aux->next = temp;

  qtyNodes++;
  cout << "ADDED AT POSITION No " << position << endl;

  // response << "ADDED AT POSITION No " << position;
  // break;
  return;
  // }
  // return response.str();
}

void LinkedList::removeFront()
{
  if (empty())
  {
    cout << "EMPTY LIST." << endl;
  }

  else
  {
    Node *old = head;
    head = old->next;
    delete old;
    qtyNodes--;
  }
}

void LinkedList::removeBack()
{
  Node *aux;
  if (empty())
  {
    cout << "EMPTY LIST." << endl;
  }
  else
  {
    if (head->next == NULL)
    {
      aux = head;
      head = NULL;
      delete aux;
      qtyNodes--;
    }
    else
    {
      Node *previous;
      aux = head;
      while (aux->next != NULL)
      {
        previous = aux;
        aux = aux->next;
      }
      previous->next = NULL;
      delete aux;
      qtyNodes--;
    }
  }
}

// string LinkedList::removeInPosition(int position)

void LinkedList::removeInPosition(int position)
{
  // stringstream response;
  // while (true)
  // {
  if (position < 1)
  {
    cout << "POSITION MUST BE GREATER THAN 1." << endl;

    // response << "POSITION MUST BE GREATER THAN 1.";
    // break;
    return;
  }
  if (position > qtyNodes + 1)
  {
    cout << "POSITION INEXISTENT. THE LIST HAS " << qtyNodes << " NODES." << endl;

    // response << "POSITION INEXISTENT. THE LIST HAS " << qtyNodes << " NODES.";
    // break;
    return;
  }
  if (position == 1)
  {
    removeFront();
    cout << "REMOVED AT FRONT" << endl;

    // response << "REMOVED AT FRONT";
    // break;
    return;
  }
  Node *aux = head;

  for (int i = 0; i < position - 2; i++)
    aux = aux->next;
  Node *temp = aux->next;
  aux->next = temp->next;
  delete temp;

  qtyNodes--;
  cout << "REMOVED AT POSITION No " << position << endl;
  // response << "REMOVED AT POSITION No " << position;
  // break;
  return;
  // }
  // return response.str();
}

void LinkedList::removeNode(Node *node)
{
  Node *temp;
  temp = node->next;
  node->data = temp->data;
  node->next = temp->next;
  delete temp;
}

void LinkedList::removeElement(int e)
{
  Node *previous = head, *current = head->next;
  while (current != NULL)
  {
    cout << "previous data: " << previous->data << endl;
    cout << "current data: " << current->data << endl;
    if (current->data == e)
    {
      removeCurrentNode(previous, current);
      cout << "removing current node!" << endl;
      break;
    }
    else
    {
      previous = current;
      current = current->next;
      cout << "not removing any node!" << endl;
    }
  }
  if (back() == e)
  {
    removeBack();
  }
  else if (front() == e)
  {
    removeFront();
  }
}

void LinkedList::removeCurrentNode(Node *previous, Node *current)
{
  previous->next = current->next;
  delete current;
  qtyNodes--;
}

void LinkedList::removeDuplicates()
{
  Node *one = head, *two, *duplicate;
  while (one != NULL && one->next != NULL)
  {
    two = one;
    while (two->next != NULL)
    {
      if (one->data == two->next->data)
      {
        duplicate = two->next;
        two->next = two->next->next;
        delete duplicate;
      }
      else
      {
        two = two->next;
      }
    }
    one = one->next;
  }
}

void LinkedList::print()
{
  if (empty())
    cout << "EMPTY LIST." << endl;
  else
  {
    Node *aux = head;
    cout << "[ ";
    while (aux != NULL)
    {
      cout << aux->data << " ";
      aux = aux->next;
    }
    cout << "]" << endl;
    ;
  }
}

void LinkedList::reverse()
{
  Node *previousNode = NULL, *currentNode = head, *nextNode;
  while (currentNode != NULL)
  {
    nextNode = currentNode->next;
    currentNode->next = previousNode;
    previousNode = currentNode;
    currentNode = nextNode;
  }
  head = previousNode;
}

bool LinkedList::containsLoop()
{
  Node *slow = head, *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
      return true;
  }
  return false;
}

void LinkedList::sort()
{
  Node *one = head, *two = head;
  for (int i = 0; i < qtyNodes; i++)
  {
    for (int j = 0; j < qtyNodes - 1; j++)
    {
      if (one->data < two->data)
      {
        int aux = one->data;
        one->data = two->data;
        two->data = aux;
      }
      two = two->next;
    }
    two = head;
    one = head->next;
    for (int k = 0; k < i; k++)
    {
      one = one->next;
    }
  }
}

bool LinkedList::present(int e)
{
  Node *aux = head;
  while (aux != NULL)
  {
    if (aux->data == e)
      return true;
    aux = aux->next;
  }
  return false;
}

void LinkedList::listUnion(LinkedList a, LinkedList b)
{
  LinkedList one = a, two = b;
  while (one.head != NULL)
  {
    addBack(one.head->data);
    one.head = one.head->next;
  }
  while (two.head != NULL)
  {
    addBack(two.head->data);
    two.head = two.head->next;
  }
}

void LinkedList::listIntersection(LinkedList a, LinkedList b)
{
  LinkedList one = a, two = b;
  while (two.head != NULL)
  {
    if (one.present(two.head->data))
    {
      addBack(two.head->data);
    }
    two.head = two.head->next;
  }
}

void LinkedList::listSubtraction(LinkedList a, LinkedList b)
{
  LinkedList one = a, two = b;
  while (one.head != NULL)
  {
    if (!two.present(one.head->data))
    {
      addBack(one.head->data);
    }
    one.head = one.head->next;
  }
}

void LinkedList::listSubset(LinkedList a, LinkedList b)
{
  LinkedList one = a, two = b;
  while (two.head != NULL)
  {
    if (one.present(two.head->data))
    {
      addBack(two.head->data);
    }
    two.head = two.head->next;
  }
}