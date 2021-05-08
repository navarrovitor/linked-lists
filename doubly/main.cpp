#include <cstdlib>
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
  cout << "----- testing -----" << endl;
  LinkedList list1;
  list1.addBack(1);
  list1.addBack(2);
  list1.addBack(3);
  list1.removeInPosition(3);
  list1.print();
  return 0;
}

// int main()
// {
//   int run1 = 0, run2 = 0, run3 = 0, aux, opt1, opt2, value, position;
//   cout << "ok entrou" << endl;
//   LinkedList list1, list2, list3;
//   cout << "Bem vindo ao programa de Listas simplesmente encadeadas!" << endl
//        << "Você poderá testar tudo o que você imagina envolvendo este assunto." << endl;
//   while (run1 < 1)
//   {
//     cout << "---------------------------------------------" << endl
//          << "Escolha uma opção:" << endl
//          << "0 - sair do programa" << endl
//          << "1 - inserir um novo nó no início" << endl
//          << "2 - inserir um novo nó no final" << endl
//          << "3 - inserir um novo nó na posição 'n'" << endl
//          << "4 - inserir um novo nó imediatamente após a posição 'n'" << endl
//          << "5 - inserir um novo nó imediatamente antes da posição 'n'" << endl
//          << "6 - excluir o nó da posição 'n'" << endl
//          << "7 - excluir o nó imediatamente após a posição 'n'" << endl
//          << "8 - excluir o nó imediatamente antes da posição 'n'" << endl
//          << "9 - informar o total de elementos na lista" << endl
//          << "10 - imprimir a lista" << endl
//          << "11 - remove valor do início" << endl
//          << "12 - remove valor do final" << endl
//          << "13 - remove valores repetidos" << endl
//          << "14 - retorna o primeiro nó" << endl
//          << "15 - ordena a lista em ordem crescente" << endl
//          << endl
//          << "---------------------------------------------" << endl
//          << "Lista 1: ";
//     list1.print();
//     cout << "---------------------------------------------" << endl
//          << "Informe sua opção:" << endl;
//     cin >> opt1;

//     switch (opt1)
//     {
//     case 0:
//       cout << "Saindo do programa..." << endl;
//       run1++;
//       break;

//     case 1:
//       cout << "Valor do elemento a ser inserido (int):" << endl;
//       cin >> value;
//       list1.addFront(value);
//       break;

//     case 2:
//       cout << "Valor do elemento a ser inserido (int):" << endl;
//       cin >> value;
//       list1.addBack(value);
//       break;

//     case 3:
//       cout << "Valor do elemento (int):" << endl;
//       cin >> value;
//       cout << "Posição a ser inserido:" << endl;
//       cin >> position;
//       list1.addInPosition(value, position);
//       break;

//     case 4:
//       cout << "Valor do elemento (int):" << endl;
//       cin >> value;
//       cout << "Posição a ser inserido (será a próxima à escolhida):" << endl;
//       cin >> position;
//       list1.addInPosition(value, position + 1);
//       break;

//     case 5:
//       cout << "Valor do elemento (int):" << endl;
//       cin >> value;
//       cout << "Posição a ser inserido (será a anterior à escolhida):" << endl;
//       cin >> position;
//       list1.addInPosition(value, position - 1);
//       break;

//     case 6:
//       cout << "Posição a ser removido:" << endl;
//       cin >> position;
//       list1.removeInPosition(position);
//       break;

//     case 7:
//       cout << "Posição a ser removido (será a próxima à escolhida):" << endl;
//       cin >> position;
//       list1.removeInPosition(position + 1);
//       break;

//     case 8:
//       cout << "Posição a ser removido (será a ANTERIOR à escolhida):" << endl;
//       cin >> position;
//       list1.removeInPosition(position - 1);
//       break;

//     case 9:
//       cout << "A lista tem " << list1.qty() << " elemento(s)" << endl;
//       break;

//     case 10:
//       list1.print();
//       break;

//     case 11:
//       list1.removeFront();
//       break;

//     case 12:
//       list1.removeBack();
//       break;

//     case 13:
//       list1.removeDuplicates();
//       cout << "Elementos duplicados removidos." << endl;
//       break;

//     case 14:
//       list1.front() != -1 ? cout << "O primeiro elemento da lista é " << list1.front() << endl : cout << "LISTA VAZIA." << endl;
//       break;

//     case 15:
//       list1.sort();
//       cout << "A lista foi ordenada." << endl;
//       break;
//     default:
//       cout << "Opção não válida..." << endl;
//       break;
//     }
//   }
//   return 0;
// }

// cout << "\n0 - sair";
// cout << "\n1 - inserir um novo nó no inicio";
// cout << "\n2 - inserir um novo nó no final";
// cout << "\n3 - inserir um novo nó na posicao 'n'";
// cout << "\n4 - inserir um novo nó imediatamente apos a posicao 'n'";
// cout << "\n5 - inserir um novo nó imediatamente antes da posicao 'n'";
// cout << "\n6 - excluir um nó da posicao 'n'";
// cout << "\n7 - excluir um nó imediatamente apos a posicao 'n'";
// cout << "\n8 - excluir um nó imediatamente antes da posicao 'n'";
// cout << "\n9 - informar o total de elementos na lista";
// cout << "\n10 - imprimir a lista";
// cout << "\n11 - primeiro da lista";
// cout << "\n12 - ultimo da lista";