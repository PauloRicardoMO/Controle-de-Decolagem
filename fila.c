#include "fila.h"

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
