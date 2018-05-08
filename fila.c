#include "fila.h"

/** \brief Função de insersão na fila
 *  \author Fagner Maia
 *  \param **inicio endereço de memoria do ponteiro do inicio da fila
 *  \param **fim endereço de memoria do ponteiro do fim da fila
 *  \param *aviao elemento a ser inserido na fila
 *
 * Insere o *aviao na fila de decolagem.
 */
void inserirNaFilaDecolagem (Aviao **inicio, Aviao **fim, Aviao *aviao){
    if(*inicio==NULL)
        *inicio=*fim=aviao;
    else
        (*fim)->prox=aviao;
    *fim=Aviao;
    }

void ListarProximoADecolar(Aviao **inicio,Aviao **fim){

    if(*inicio == NULL)
        printf("\nNenhum aviao na fila!!");
    else{

        Aviao *aux = NULL,*tmp;
        while(aux != *inicio){

            tmp = Decolar(&(*inicio));
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
       Avião *aux, *final= *fim;
       do{
           aux = Decolar(&(*inicio),&(*fim));
           qtd++;
           inserirNaFilaDecolagem(&(*inicio),&(*fim),aux);
       } while (aux!=final);
         return qtd;
}
