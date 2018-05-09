#include "fila.h"
#include <string.h>

/** \brief Função de insersão na fila
 *  \author Fagner Maia
 *  \param **inicio endereço de memoria do ponteiro do inicio da fila
 *  \param **fim endereço de memoria do ponteiro do fim da fila
 *  \param *aviao elemento a ser inserido na fila
 *
 * Insere o *aviao na fila de decolagem.
 */
void inserirNaFilaDecolagem (Aviao **inicio, Aviao **fim, Aviao *aviao){
    if(strcmp(aviao->destino, "-") == 0){
        printf("\nInforme o destino do voo: ");
        scanf("%s", &aviao->destino);
    }

    if(*inicio == NULL)
        *inicio = *fim = aviao;
    else
        (*fim)->prox = aviao;
    *fim = aviao;
}

/** \brief Função lista o próximo avião a decolar
*   \author Rodrigo Nunes de Oliveira
*   \param **inicio endereço de memória do ponteiro do inicio da fila
*   \param **fim endereço de memória do ponteiro do fim da fila
*
*   Lista o próximo avião a decolar, ou seja, imprime as informações do primeiro avião que está na fila
*/
void listarProximoADecolar(Aviao **inicio, Aviao **fim){

    if(*inicio == NULL)
        printf("\nNenhum aviao na fila!!");
    else{

        Aviao *aux = NULL,*tmp;
        while(aux != *inicio){

            tmp = decolar(&(*inicio));
            if(aux == NULL)
                aux = tmp;

            if(aux == tmp){

                printf("\nCodigo do aviao: %d",tmp->codigo);
                printf("\nCapitao: %s",tmp->capitao);
                printf("\nDestino: %s",tmp->destino);
            }

            inserirNaFilaDecolagem(&(*inicio),&(*fim),tmp);

        }
    }
}

/** \brief Função de contagem de avioes
 *  \author Gabriel Mendes
 *  \param **inicio endereço de memoria do ponteiro do inicio da fila
 *  \param **fim endereço de memoria do ponteiro do fim da fila
 *  \return qtd o numero de avioes na fila
 *
 * Conta quantos avioes estão à espera de decolar
 */
int qtdAvioesNaFila(Aviao **inicio, Aviao **fim){
    int qtd = 0;
    Aviao *aux, *tmp = *fim;
    if(*inicio != NULL){
        do{
            aux = decolar(&(*inicio));
            qtd++;
            inserirNaFilaDecolagem(&(*inicio),&(*fim),aux);
        }while (aux!=tmp);
    }

    return qtd;
}

/** \brief Função de retirada da fila
*   \author Claudio Sena
*   \param **inicio endereço de memoria do ponteiro do inicio da fila
*   \return aux aviao a ser retirado da fila
*
*   Retira o aviao da fila de decolagem.
*/

Aviao* decolar(Aviao **inicio){
	Aviao *aux = *inicio;
	if(*inicio != NULL){
		(*inicio) = (*inicio)->prox;
		aux->prox = NULL;
    }else{
        printf("VAZIO");
	}
	return aux;
}

/** \brief Função de rlistagem da fila de Decolagem
*   \author Sávio Nunes
*   \param **inicio endereço de memoria do ponteiro do inicio da fila
*   \param **fim endereço de memoria do ponteiro do fim da fila
*
*   Imprime na tela todos os avioes que estão aguardando decolagem.
*/
void listarFilaDeDecolagem(Aviao **inicio, Aviao **fim){
    Aviao *p = NULL, *tmp;
	if (*inicio == NULL)
		printf ("\nFila vazia!!\n");
    else{
        while (p != *inicio){
            tmp = decolar (&(*inicio));
            if (p == NULL)
                p = tmp;

            printf("\nCodigo do aviao: %d", tmp->codigo);
            printf("\nCapitao: %s", tmp->capitao);
            printf("\nDestino: %s", tmp->destino);
            printf("\n\n");
            inserirNaFilaDecolagem(&(*inicio), &(*fim),tmp);
        }
    }
}
