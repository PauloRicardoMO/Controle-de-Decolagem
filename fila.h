/** \brief Definição da biblioteca com funções referentes à Fila de decolagem
 *  \author Paulo Ricardo
 *
 * Definição dos cabeçalhos da funções e descrição dos respónsaveis por implementar cada função.
 */
#ifndef TIPO_AVIAO
#define TIPO_AVIAO

#include <stdio.h>
#include <stdlib.h>

typedef struct aviao{
    int codigo;
    char capitao[20];
    char destino[20];
    struct aviao *prox;
}Aviao;
#endif // TIPO_AVIAO

#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

void inserirNaFilaDecolagem(Aviao **inicio, Aviao **fim, Aviao *aviao);/** \Responsavel: Fagner Maia*/
Aviao* Decolar(Aviao **inicio);/** \Responsavel: Claudio Sena*/
void ListarFilaDeDecolagem(Aviao **inicio, Aviao **fim);/** \Responsavel: Savio Nunes*/
void ListarProximoADecolar(Aviao **inicio, Aviao **fim);/** \Responsavel: Rodrigo*/
int qtdAvioesNaFila(Aviao **inicio, Aviao **fim);/** \Responsavel: Gabriel Mendes*/

#endif // FILA_H_INCLUDED

