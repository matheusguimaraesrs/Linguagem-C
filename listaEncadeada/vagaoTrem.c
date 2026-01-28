#include <stdio.h>
#include <stdlib.h>

struct vagao //node = vagão (analogia do trem)
{
    int carvao; //Valor que você quer armazenar 
    struct  vagao *next; //ponteiro para o próximo nó da lista
};

void liberyList(struct vagao *liberarVagao)
{
    struct vagao *temp;
    while (liberarVagao != NULL)
    {
        temp = liberarVagao;
        liberarVagao = liberarVagao->next;
        free(temp);
    }
}

int main(void){
    struct vagao *head; //cria o inicio da lista encadeada
    struct vagao *vagao1;
    struct vagao *vagao2;

    head = malloc(sizeof(struct vagao)); //aloca memória para um nó
    vagao1 = malloc(sizeof(struct vagao));
    vagao2 = malloc(sizeof(struct vagao));

    head->carvao = 10; // ou (*head).carvao = 10; atribui um valor em data
    head->next = vagao1; // indica o endereço do próximo vagão

    vagao1->carvao = 20;
    vagao1->next = vagao2;

    vagao2->carvao = 30;
    vagao2->next = NULL; //indica que, por enquanto, é o fim da lista

    struct vagao *vagaoAtual = head;
    int i = 1;
    while (vagaoAtual != NULL)
    {
        printf("vagão%d = [%d]\n", i++, vagaoAtual->carvao);
        vagaoAtual = vagaoAtual->next; //pula para o próximo vagão
    }
    liberyList(head);
    
    // outra forma de percorrer a lista (for)
    // for (struct vagao *Atual = head; Atual != NULL; Atual = Atual->next)
    //     printf("vagão%d = [%d]\n", i++, vagaoAtual->carvao);    
    return (0);
}