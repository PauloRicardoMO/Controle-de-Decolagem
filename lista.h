/** \brief Definição da biblioteca com funções referentes à lista
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

#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

Aviao* criarAviao(); /** \Responsavel: */
Aviao* insereAviaoLista(Aviao **lista);/** \Responsavel: */
Aviao* buscarAviao(Aviao *lista);/** \Responsavel: */
#endif // LISTA_H_INCLUDED
