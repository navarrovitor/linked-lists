#include "Node.h"
#include "LinkedList.h"

int main()
{
  cout << endl
       << "hey there!" << endl;
  LinkedList a, b, c;
  a.addBack(1);
  a.addBack(2);
  a.addBack(3);
  a.addBack(3);
  b.addBack(3);
  b.addBack(4);
  b.addBack(5);
  c.listUnion(a, b);
  a.print();
  b.print();
  c.print();
  return 0;
}
