#include <cstdlib>
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
  int run1 = 0, run2 = 0, run3 = 0, aux, opt1, opt2, value, position;
  LinkedList list1, list2, list3;
  cout << "Bem vindo ao programa de Listas simplesmente encadeadas!" << endl
       << "Você poderá testar tudo o que você imagina envolvendo este assunto." << endl;
  while (run1 < 1)
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
         << "11 - remove valor do início" << endl
         << "12 - remove valor do final" << endl
         << "13 - remove valores repetidos" << endl
         << "14 - retorna o primeiro nó" << endl
         << "15 - ordena a lista em ordem crescente" << endl
         << "16 - opções que envolvem a segunda lista" << endl
         << endl
         << "---------------------------------------------" << endl
         << "Lista 1: ";
    list1.print();
    cout << "---------------------------------------------" << endl
         << "Informe sua opção:" << endl;
    cin >> opt1;

    switch (opt1)
    {
    case 0:
      cout << "Saindo do programa..." << endl;
      run1++;
      break;

    case 1:
      cout << "Valor do elemento a ser inserido (int):" << endl;
      cin >> value;
      list1.addFront(value);
      break;

    case 2:
      cout << "Valor do elemento a ser inserido (int):" << endl;
      cin >> value;
      list1.addBack(value);
      break;

    case 3:
      cout << "Valor do elemento (int):" << endl;
      cin >> value;
      cout << "Posição a ser inserido:" << endl;
      cin >> position;
      list1.addInPosition(value, position);
      break;

    case 4:
      cout << "Valor do elemento (int):" << endl;
      cin >> value;
      cout << "Posição a ser inserido (será a próxima à escolhida):" << endl;
      cin >> position;
      list1.addInPosition(value, position + 1);
      break;

    case 5:
      cout << "Valor do elemento (int):" << endl;
      cin >> value;
      cout << "Posição a ser inserido (será a anterior à escolhida):" << endl;
      cin >> position;
      list1.addInPosition(value, position - 1);
      break;

    case 6:
      cout << "Posição a ser removido:" << endl;
      cin >> position;
      list1.removeInPosition(position);
      break;

    case 7:
      cout << "Posição a ser removido (será a próxima à escolhida):" << endl;
      cin >> position;
      list1.removeInPosition(position + 1);
      break;

    case 8:
      cout << "Posição a ser removido (será a ANTERIOR à escolhida):" << endl;
      cin >> position;
      list1.removeInPosition(position - 1);
      break;

    case 9:
      cout << "A lista tem " << list1.qty() << " elemento(s)" << endl;
      break;

    case 10:
      list1.print();
      break;

    case 11:
      list1.removeFront();
      break;

    case 12:
      list1.removeBack();
      break;

    case 13:
      list1.removeDuplicates();
      cout << "Elementos duplicados removidos." << endl;
      break;

    case 14:
      list1.front() != -1 ? cout << "O primeiro elemento da lista é " << list1.front() << endl : cout << "LISTA VAZIA." << endl;
      break;

    case 15:
      list1.sort();
      cout << "A lista foi ordenada." << endl;
      break;

    case 16:
      if (list1.empty())
      {
        cout << endl
             << "Você precisa adicionar ao menos um número na lista 1" << endl;
      }
      else
      {
        while (list2.empty())
        {
          cout << "---------------------------------------------" << endl
               << "Uma segunda lista tem de ser criada para as opções 1 - 4" << endl
               << "- Digite um valor e pressione ENTER para adicionar um número" << endl
               << "- Digite -1 e pressione ENTER para encerrar as adições na segunda lista" << endl
               << "---------------------------------------------" << endl;
          while (run2 < 1)
          {
            cout << "Qual valor você deseja inserir?" << endl;
            cin >> aux;
            if (aux == -1)
              if (list2.empty())
                cout << "Você precisa adicionar ao menos um número na lista 2" << endl;
              else
                run2++;
            else
              list2.addBack(aux);
            cout << "Lista 2:";
            list2.print();
          }
        }
        cout << "RUN 3: " << run3 << endl;
        while (run3 < 1)
        {
          cout << "Lista 2:";
          list2.print();
          cout << "0 - voltar ao menu inicial" << endl
               << "1 - exibir a união das duas listas (a U b)" << endl
               << "2 - exibir a intersecção das duas listas (a n b)" << endl
               << "3 - exibir a subtração das duas listas (a - b)" << endl
               << "4 - conferir se a lista a pertence à lista b (a C b)" << endl
               << endl
               << "---------------------------------------------" << endl
               << "Lista 1: ";
          list1.print();
          cout << "Lista 2: ";
          list2.print();
          cout << "---------------------------------------------" << endl;
          cout << "Informe sua opção:" << endl;
          cin >> opt2;
          switch (opt2)
          {
          case 0:
            cout << "Voltando ao menu inicial..." << endl;
            run3++;
            break;

          case 1:
            list3.listUnion(list1, list2);
            cout << "---------------------------------------------" << endl
                 << "Lista 1 U Lista 2: ";
            list3.print();
            cout << "---------------------------------------------" << endl;
            list3.removeAll();
            break;

          case 2:
            list3.listIntersection(list1, list2);
            cout << "---------------------------------------------" << endl
                 << "Lista 1 n Lista 2: ";
            list3.print();
            cout << "---------------------------------------------" << endl;
            list3.removeAll();
            break;

          case 3:
            list3.listSubtraction(list1, list2);
            cout << "---------------------------------------------" << endl
                 << "Lista 1 - Lista 2:";
            list3.print();
            cout << "---------------------------------------------" << endl;
            list3.removeAll();
            break;

          case 4:
            cout << "---------------------------------------------" << endl;
            list1.listSubset(list2) != 0 ? cout << "A lista 1 pertence à lista 2" << endl : cout << "A lista 1 não pertence à lista 2" << endl;
            cout << "---------------------------------------------" << endl;
            break;

          default:
            break;
          }
        }
        run2--;
        run3--;
        break;

      default:
        cout << "Opção não válida..." << endl;
        break;
      }
    }
  }
  return 0;
}
