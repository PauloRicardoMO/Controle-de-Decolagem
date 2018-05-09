#include "lista.h"
#include <string.h>

/** \brief Função que cria aviao
 * \author Paulo Ricardo
 * \return p Aviao devidamente criado.
 *
 * Aloca memoria e insere dados basicos de um aviao
 */
Aviao* criarAviao(){
    Aviao *p = NULL;
    p = (Aviao*) malloc(sizeof(Aviao));
    printf("\nInforme o Codigo do aviao: ");
    scanf("%d", &p->codigo);
    printf("\nInforme o nome do Capitao: ");
    scanf("%s", &p->capitao);
    strcpy(p->destino, "-");
    p->prox = NULL;

    return p;
}

/** \brief Função que insere um aviao na lista
 * \author Alex Bruno
 * \param **lista pronteiro para endereço do inicio da lista de avioes no patio
 * \return inicio ponteiro para inicio da lista.
 *
 * Insere um aviao numa lista simulando um patio de aeroporto
 */
Aviao* insereAviaoLista(Aviao **lista){
    Aviao *p = criarAviao(), *inicio = *lista;

    if(inicio == NULL){//primeiro elemento
        inicio = *lista = p;
    }else{
        while((*lista)->prox != NULL)
            *lista = (*lista)->prox;
        (*lista)->prox = p;
    }

     return inicio;
}

/** \brief Função que busca avio na lista
 * \author Paulo Ricardo
 * \return p Aviao encontrado.
 *
 * Busca um aviao no patio a partir de um codigo.
 */
/*
Aviao* buscarAviao(Aviao **lista, Aviao **p){
    Aviao *ant = *lista, *inicio = *lista;
    int chave;

    printf("\nInforme o codigo do aviao: ");
    scanf("%d", &chave);

    if(inicio != NULL){
        if(inicio->codigo == chave){
            *p = inicio;
            (*p)->prox = NULL;
            inicio = inicio->prox;
        }else{
            while(*lista != NULL){
                if((*lista)->codigo == chave){
                    *p = *lista;
                    ant->prox = (*lista)->prox;
                    (*p)->prox = NULL;
                    break;
                }
                ant = *lista;
            }
        }
    }
    return inicio;
}
*/
Aviao* buscarAviao(Aviao *lista){
    int chave;
    Aviao *p = NULL;
    printf("\n\nInforme o codigo do Aviao: ");
    scanf("%d", &chave);

    if(lista != NULL){
        while(lista->codigo != chave){
            lista = lista->prox;
        }
    }
    if(lista != NULL){
        printf("\n\nAviao encontrado: \n");
        p = lista;
    }else printf("\nAviao nao encontrado: \n");

    return p;
}
/*
Aviao* excluirAviao(Aviao **lista, Aviao *p){
    Aviao *tmp, *inicio = *lista, *ant = *lista;

    if(*lista != NULL){
        while(*lista != NULL){
            if(inicio->codigo == p->codigo){
                tmp = inicio;
                inicio = inicio->prox;
                free(tmp);
                break;
            }else{
                if((*lista)->codigo == p->codigo){
                    tmp = *lista;
                    ant->prox = (*lista)->prox;
                    free(tmp);
                    break;
                }
                ant = *lista;
                *lista = (*lista)->prox;
            }
        }
    }
    return inicio;
}*/
