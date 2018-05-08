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
    char capitão[20];
    char destino[20];
    struct aviao *prox;
}Aviao;
#endif // TIPO_AVIAO

#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

Aviao* criarAviao(); /** \Responsavel: Paulo Ricardo*/
Aviao* insereAviaoLista(Aviao **lista);/** \Responsavel: Alex Bruno*/
Aviao* buscarAviao(Aviao *lista);/** \Responsavel: Paulo Ricardo*/
#endif // LISTA_H_INCLUDED
