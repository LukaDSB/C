#include <stdio.h>

typedef struct no{
    int info;
    struct no *prox;
}Tlista;

typedef struct descritor{
    Tlista *prim, *ult;
    int n;
}Tdescritor;


void criarLista(Tdescritor *l){
    l->prim = NULL;
    l->ult = NULL;
    l->n = 0;
}

int estaVazia(Tdescritor *l){
    return(l->n == 0);
}

void insereInicio(Tdescritor *l, int v){
    Tlista *n = malloc(sizeof(Tlista)); // n é um ponteiro para Tlista, ou nó do tipo lista.

    if(n != NULL){
        n->info = v;
        n->prox = l->prim;

        l->prim = n;
        if(estaVazia(l))
            l->ult = n;
        l->n++;
    }else{
        printf("Nao foi possivel alocar espaco.");
    }
}

void imprimeLista(Tdescritor **l){
    if(!estaVazia(l)){
        for(Tlista *p = *l; p != NULL; p = p->prox){
            printf("%d\n", p->info);
        }
    }
}

void insereFinal( Tdescritor *l, int v){
    Tlista *n = malloc(sizeof(Tlista));

    if(n != NULL){
        
    }
}

void removeInicio(Tdescritor *l){
    if(!estaVazia(l)){
        Tlista *aux = l->prim;

        l->prim = aux->prox;
        free(aux);

        if(l->prim == NULL)
            l->ult = NULL;
        l->n--;

    }else{
        printf("A lista está vazia!\n");
    }
}

int main(){
Tdescritor lista;
    system("cls");
    criarLista(&lista);
    insereInicio(&lista, 10);
    insereInicio(&lista, 20);
    insereInicio(&lista, 30);

    imprimeLista(&lista);

    printf("\nApos a remocao: \n\n");
    removeInicio(&lista);
    imprimeLista(&lista);


    return 0;
}