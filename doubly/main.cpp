#include <cstdlib>
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
  LinkedList list;
  int run, opt, value, position;
  cout << "Bem vindo ao programa de Listas simplesmente encadeadas!" << endl
       << "Você poderá testar tudo o que você imagina envolvendo este assunto." << endl;
  while (run < 1)
  {
    cout << "---------------------------------------------" << endl
         << "Escolha uma opção:" << endl
         << "0 - sair do programa" << endl
         << "1 - inserir um novo nó no início" << endl
         << "2 - inserir um novo nó no final" << endl
         << "3 - inserir um novo nó na posição 'n'" << endl
         << "4 - inserir um novo nó imediatamente após a posição 'n'" << endl
         << "5 - inserir um novo nó imediatamente antes da posição 'n'" << endl
         << "6 - excluir o nó da posição 'n'" << endl
         << "7 - excluir o nó imediatamente após a posição 'n'" << endl
         << "8 - excluir o nó imediatamente antes da posição 'n'" << endl
         << "9 - informar o total de elementos na lista" << endl
         << "10 - imprimir a lista" << endl
         << "11 - valor do início" << endl
         << "12 - valor do final" << endl
         << endl
         << "---------------------------------------------" << endl
         << "Lista 1: ";
    list.print();
    cout << "---------------------------------------------" << endl
         << "Informe sua opção:" << endl;
    cin >> opt;

    switch (opt)
    {
    case 0:
      cout << "Saindo do programa..." << endl;
      run++;
      break;

    case 1:
      cout << "Valor do elemento a ser inserido (int):" << endl;
      cin >> value;
      list.addFront(value);
      break;

    case 2:
      cout << "Valor do elemento a ser inserido (int):" << endl;
      cin >> value;
      list.addBack(value);
      break;

    case 3:
      cout << "Valor do elemento (int):" << endl;
      cin >> value;
      cout << "Posição a ser inserido:" << endl;
      cin >> position;
      list.addInPosition(value, position);
      break;

    case 4:
      cout << "Valor do elemento (int):" << endl;
      cin >> value;
      cout << "Posição a ser inserido (será a próxima à escolhida):" << endl;
      cin >> position;
      list.addInPosition(value, position + 1);
      break;

    case 5:
      cout << "Valor do elemento (int):" << endl;
      cin >> value;
      cout << "Posição a ser inserido (será a anterior à escolhida):" << endl;
      cin >> position;
      list.addInPosition(value, position - 1);
      break;

    case 6:
      cout << "Posição a ser removido:" << endl;
      cin >> position;
      list.removeInPosition(position);
      break;

    case 7:
      cout << "Posição a ser removido (será a próxima à escolhida):" << endl;
      cin >> position;
      list.removeInPosition(position + 1);
      break;

    case 8:
      cout << "Posição a ser removido (será a ANTERIOR à escolhida):" << endl;
      cin >> position;
      list.removeInPosition(position - 1);
      break;

    case 9:
      cout << "A lista tem " << list.qty() << " elemento(s)" << endl;
      break;

    case 10:
      list.print();
      break;

    case 11:
      cout << "Valor do início: " << list.frontValue() << endl;
      break;

    case 12:
      cout << "Valor do final: " << list.backValue() << endl;
      break;

    case 13:
      list.removeDuplicates();
      cout << "Elementos duplicados removidos." << endl;
      break;

    default:
      break;
    }
    return 0;
  }