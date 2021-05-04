#include "Node.h"
#include "LinkedList.h"

int main()
{
  cout << "---testing---" << endl;
  LinkedList a;
  LinkedList b;
  LinkedList c;
  a.addBack(1);

  b.addBack(3);
  b.addBack(1);
  b.addBack(2);

  a.print();
  b.print();
  c.listSubset(a, b);
  c.print();
  return 0;
}
