#include "LinkedList.h"
#include <sstream>

LinkedList::LinkedList()
{
  head = NULL;
  qtyNodes = 0;
}

bool LinkedList::empty() { return head == NULL; }

int LinkedList::qty() { return qtyNodes; }

int LinkedList::front()
{
  if (empty())
    return -1;
  else
    return head->data;
}

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

void LinkedList::addInPosition(int e, int position)
{
  if (position < 1)
  {
    cout << "A POSIÇÃO TEM DE SER MAIOR QUE 1." << endl;
    return;
  }
  if (position > qtyNodes + 1)
  {
    cout << "POSIÇÃO INEXISTENTE. A LISTA TEM " << qtyNodes << " NÓS." << endl;
    return;
  }
  if (position == 1)
  {
    addFront(e);
    return;
  }

  Node *temp = new Node(e), *aux = head;
  for (int i = 0; i < position - 2; i++)
    aux = aux->next;
  temp->next = aux->next;
  aux->next = temp;

  qtyNodes++;
  return;
}

string LinkedList::addInPositionString(int e, int position)
{
  stringstream response;
  while (true)
  {
    if (position < 1)
    {
      response << "POSITION MUST BE GREATER THAN 1.";
      break;
    }
    if (position > qtyNodes + 1)
    {
      response << "POSITION INEXISTENT. THE LIST HAS " << qtyNodes << " NODES.";
      break;
    }
    if (position == 1)
    {
      addFront(e);
      response << "ADDED AT FRONT";
      break;
    }
    Node *temp = new Node(e), *aux = head;

    for (int i = 0; i < position - 2; i++)
      aux = aux->next;
    temp->next = aux->next;
    aux->next = temp;

    qtyNodes++;
    response << "ADDED AT POSITION No " << position;
    break;
  }
  return response.str();
}

void LinkedList::removeFront()
{
  if (empty())
  {
    return;
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
    return;
  }
  else
  {
    if (head->next == NULL)
    {
      // aux = head;
      head = NULL;
      // delete aux;
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

void LinkedList::removeInPosition(int position)
{
  if (position < 1)
  {
    cout << "POSITION MUST BE GREATER THAN 1." << endl;
    return;
  }
  if (position > qtyNodes)
  {
    cout << "POSITION INEXISTENT. THE LIST HAS " << qtyNodes << " NODES." << endl;
    return;
  }
  if (position == 1)
  {
    removeFront();
    cout << "REMOVED AT FRONT" << endl;
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
  return;
}

string LinkedList::removeInPositionString(int position)
{
  stringstream response;
  while (true)
  {
    if (position < 1)
    {
      response << "POSITION MUST BE GREATER THAN 1.";
      break;
    }
    if (position > qtyNodes)
    {
      response << "POSITION INEXISTENT. THE LIST HAS " << qtyNodes << " NODES.";
      break;
    }
    if (position == 1)
    {
      removeFront();
      response << "REMOVED AT FRONT";
      break;
    }
    Node *aux = head;

    for (int i = 0; i < position - 2; i++)
      aux = aux->next;
    Node *temp = aux->next;
    aux->next = temp->next;
    delete temp;

    qtyNodes--;
    response << "REMOVED AT POSITION No " << position;
    break;
  }
  return response.str();
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

void LinkedList::removeAll()
{
  Node *current = head, *next = NULL;
  while (current != NULL)
  {
    next = current->next;
    free(current);
    current = next;
  }
  head = NULL;
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

bool LinkedList::isPresent(int e)
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
  int i;
  Node *one = a.head, *two = b.head;
  for (i = 0; i < a.qtyNodes; i++)
  {
    if (!isPresent(one->data))
    {
      addBack(one->data);
    }
    one = one->next;
  }
  for (i = 0; i < b.qtyNodes; i++)
  {
    if (!isPresent(two->data))
    {
      addBack(two->data);
    }
    two = two->next;
  }
}

void LinkedList::listIntersection(LinkedList a, LinkedList b)
{
  LinkedList one = a, two = b;
  while (two.head != NULL)
  {
    if (one.isPresent(two.head->data))
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
    if (!two.isPresent(one.head->data))
    {
      addBack(one.head->data);
    }
    one.head = one.head->next;
  }
}

bool LinkedList::listSubset(LinkedList x)
{
  LinkedList two = x;
  int aux = 0;
  while (two.head != NULL)
  {
    if (isPresent(two.head->data))
    {
      aux++;
    }
    two.head = two.head->next;
  }
  return aux == qtyNodes ? true : false;
}
