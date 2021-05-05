#include <cstdlib>
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{

  LinkedList lista1, lista2;
  cout << "Bem vindo ao programa de Listas simplesmente encadeadas!" << endl
       << "Você poderá testar tudo o que você imagina envolvendo este assunto." << endl
       << "***Criamos uma lista para que você usufrua das opções 1 - 16***" << endl
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
       << "12 - remove valor no final da lista" << endl
       << "13 - remove valores repetidos" << endl
       << "14 - retorna o primeiro nó" << endl
       << "15 - ordena a lista em ordem crescente" << endl
       << "***A partir dessa opção, criamos uma outra lista***" << endl
       << "16 - exibe a união das duas listas (a U b)" << endl
       << "17 - exibe a intersecção das duas listas (a n b)" << endl
       << "18 - exibe a subtração das duas listas (a - b)" << endl
       << "19 - confere se a lista a pertence à lista b (a C b)" << endl;

  while (true)
  {

    //   cout << "\nInforme sua opcao: ";
    //   int opc;
    //   cin >> opc;

    //   if (opc == 0)
    //   {
    //     break;
    //   }
    //   else if (opc == 1)
    //   {
    //     int opc1;
    //     cout << "Valor do elemento (int): ";
    //     cin >> opc1;
    //     lista1.insereInicio(opc1);
    //   }
    //   else if (opc == 2)
    //   {
    //     int opc2;
    //     cout << "Valor do elemento (int): ";
    //     cin >> opc2;
    //     lista1.insereFinal(opc2);
    //   }
    //   else if (opc == 3)
    //   {
    //     int opc3a;
    //     int opc3b;
    //     cout << "\nValor do elemento (int): ";
    //     cin >> opc3a;
    //     cout << "Posicao a ser inserido: ";
    //     cin >> opc3b;
    //     Celula *c = new Celula(opc3a);
    //     cout << lista1.insereEmN(c, opc3b);
    //   }
    //   else if (opc == 4)
    //   {
    //     int opc4a;
    //     int opc4b;
    //     cout << "\nValor do elemento (int): ";
    //     cin >> opc4a;
    //     cout << "Posicao a ser inserido (Será sempre a próxima a escolhida): ";
    //     cin >> opc4b;
    //     Celula *c = new Celula(opc4a);
    //     cout << lista1.InsereProxN(c, opc4b);
    //   }
    //   else if (opc == 5)
    //   {
    //     int opc5a;
    //     int opc5b;
    //     cout << "\nValor do elemento (int): ";
    //     cin >> opc5a;
    //     cout << "Posicao a ser inserido (Será sempre a anterior a escolhida): ";
    //     cin >> opc5b;
    //     Celula *c = new Celula(opc5a);
    //     cout << lista1.InsereAntesN(c, opc5b);
    //   }
    //   else if (opc == 6)
    //   {

    //     int opc6;
    //     cout << "Posicao a ser deletada: ";
    //     cin >> opc6;
    //     lista1.removeN(opc6);
    //   }
    //   else if (opc == 7)
    //   {
    //     int opc7;
    //     cout << "Posicao a ser deletada: ";
    //     cin >> opc7;
    //     lista1.removeNApos(opc7);
    //   }
    //   else if (opc == 8)
    //   {
    //     int opc8;
    //     cout << "Posicao a ser deletada: ";
    //     cin >> opc8;
    //     lista1.removeNAntes(opc8);
    //   }
    //   else if (opc == 9)
    //   {
    //     cout << "\n\nTamanho da lista1 = " << lista1.tamanho() << " elemento(s)";
    //   }
    //   else if (opc == 10)
    //   {
    //     cout << "\n\nImpressao dos elemento da lista1 -> ";
    //     lista1.imprime();
    //   }
    //   else if (opc == 11)
    //   {
    //     int dado = lista1.removeInicio();
    //     if (dado != -1)
    //     {
    //       cout << "Elemento removido: " << dado;
    //     }
    //     else
    //     {
    //       cout << "Pilha vazia";
    //     }
    //   }
    //   else if (opc == 12)
    //   {
    //     int dado = lista1.removeFinal();
    //     if (dado != -1)
    //     {
    //       cout << "Elemento removido: " << dado;
    //     }
    //     else
    //     {
    //       cout << "Pilha vazia";
    //     }
    //   }
    //   else if (opc == 13)
    //   {
    //     lista1.VerificaRepetido();
    //     cout << "Valores repetidos foram tirados";
    //   }
    //   else if (opc == 14)
    //   {
    //     cout << "Primeiro da lista1: ";
    //     int prim = lista1.primeiro();
    //     if (prim != -1)
    //       cout << prim;
    //     else
    //       cout << "Lista vazia";
    //   }
    //   else if (opc == 15)
    //   {
    //     cout << "Ordenador de lista1";
    //     lista1.sort();
    //   }
    //   else if (opc == 16 || opc == 17 || opc == 18 || opc == 19)
    //   {
    //     LinkedList lista2;
    //     cout << "Uma segunda lista1 tem de ser criada para as opções 16 - 19" << endl
    //          << "pressione ENTER para adicionar um número e digite -1 + ENTER para encerras as adições na lista1 2" << endl;
    //     while (true)
    //     {
    //       int aux;
    //       cin >> aux;
    //       lista2.insereInicio(aux);
    //       if (aux == -1)
    //         break;
    //     }
    //     LinkedList lista3;
    //     switch (opc)
    //     {
    //     case 16:
    //       cout << "Une as listas";
    //       lista3.listUnion(lista1, lista2);
    //       break;

    //     case 17:
    //       cout << "Intersecção das listas";
    //       lista3.listIntersection(lista1, lista2);
    //       break;

    //     case 18:
    //       cout << "Subtração das listas";
    //       lista3.listSubtraction(lista1, lista2);
    //       break;

    //     case 19:
    //       cout << "A lista1 1 pertence à lista1 2?";
    //       string resposta = lista1.listSubset(lista2) ? "sim" : "não";
    //       cout << resposta << endl;
    //       break;
    //     }
    //   }
  }
  return 0;
}
